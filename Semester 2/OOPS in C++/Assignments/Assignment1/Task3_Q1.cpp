#include <iostream>
using namespace std;

/* =========================================================
   Utility / Random (no external libraries)
   ========================================================= */
int nextSeed(int seed) {
    return (seed * 1103515245 + 12345) & 0x7fffffff;
}

int randInRange(int &seed, int low, int high) {
    seed = nextSeed(seed);
    int span = high - low + 1;
    return low + (seed % span);
}

void waitForEnter() {
    cout << "Press ENTER to roll...";
    cin.get();
}

/* =========================================================
   Board numbering helpers (diagram style)
   - Cell 1 at bottom-left
   - Zig-zag each row
   ========================================================= */
int rowFromCell(int cell, int N) {
    // row index from bottom (0-based)
    return (cell - 1) / N;
}

int colFromCell(int cell, int N) {
    int r = rowFromCell(cell, N);   // bottom-based row
    int offset = (cell - 1) % N;
    if (r % 2 == 0) return offset;          // left -> right
    else return (N - 1 - offset);           // right -> left
}

int cellFromRowColBottomBased(int r, int c, int N) {
    // inverse mapping for zig-zag board
    if (r % 2 == 0) return r * N + c + 1;
    else return r * N + (N - c);
}

/* =========================================================
   Checks for used cells in snake/ladder endpoints
   ========================================================= */
bool usedInPairs(int a[], int b[], int count, int x) {
    for (int i = 0; i < count; i++) {
        if (a[i] == x || b[i] == x) return true;
    }
    return false;
}

bool usedEverywhere(
    int sHead[], int sTail[], int sCount,
    int lFoot[], int lTop[], int lCount,
    int x
) {
    return usedInPairs(sHead, sTail, sCount, x) ||
           usedInPairs(lFoot, lTop, lCount, x);
}

/* =========================================================
   Generate snakes and ladders (dynamic arrays)
   ========================================================= */
void generateSnakesRec(
    int idx, int need, int total,
    int sHead[], int sTail[],
    int lFoot[], int lTop[], int lCount,
    int &seed
) {
    if (idx == need) return;

    // snake head should be above tail
    int head = randInRange(seed, 2, total - 1);
    int tail = randInRange(seed, 1, head - 1);

    if (head <= tail || head == total ||
        usedEverywhere(sHead, sTail, idx, lFoot, lTop, lCount, head) ||
        usedEverywhere(sHead, sTail, idx, lFoot, lTop, lCount, tail)) {
        generateSnakesRec(idx, need, total, sHead, sTail, lFoot, lTop, lCount, seed);
        return;
    }

    sHead[idx] = head;
    sTail[idx] = tail;
    generateSnakesRec(idx + 1, need, total, sHead, sTail, lFoot, lTop, lCount, seed);
}

void generateLaddersRec(
    int idx, int need, int total,
    int sHead[], int sTail[], int sCount,
    int lFoot[], int lTop[],
    int &seed
) {
    if (idx == need) return;

    // ladder top should be above foot
    int foot = randInRange(seed, 1, total - 2);
    int top  = randInRange(seed, foot + 1, total - 1);

    if (top <= foot ||
        usedEverywhere(sHead, sTail, sCount, lFoot, lTop, idx, foot) ||
        usedEverywhere(sHead, sTail, sCount, lFoot, lTop, idx, top)) {
        generateLaddersRec(idx, need, total, sHead, sTail, sCount, lFoot, lTop, seed);
        return;
    }

    lFoot[idx] = foot;
    lTop[idx] = top;
    generateLaddersRec(idx + 1, need, total, sHead, sTail, sCount, lFoot, lTop, seed);
}

/* =========================================================
   Snake/Ladder check
   ========================================================= */
int snakeAt(int pos, int sHead[], int sTail[], int sCount) {
    for (int i = 0; i < sCount; i++) if (sHead[i] == pos) return sTail[i];
    return -1;
}

int ladderAt(int pos, int lFoot[], int lTop[], int lCount) {
    for (int i = 0; i < lCount; i++) if (lFoot[i] == pos) return lTop[i];
    return -1;
}

/* =========================================================
   Display board exactly by diagram numbering
   (No snake/ladder drawing on board)
   ========================================================= */
void displayBoardDiagramStyle(int M, int N, int p1Pos, int p2Pos) {
    cout << "\n================ BOARD ================\n";
    // print from top row to bottom row
    for (int topR = M - 1; topR >= 0; topR--) {
        for (int c = 0; c < N; c++) {
            int cell = cellFromRowColBottomBased(topR, c, N);

            if (cell == p1Pos && cell == p2Pos) cout << "[" << cell << ":P1,P2]\t";
            else if (cell == p1Pos)             cout << "[" << cell << ":P1]\t";
            else if (cell == p2Pos)             cout << "[" << cell << ":P2]\t";
            else                                cout << "[" << cell << "]\t";
        }
        cout << "\n";
    }
    cout << "=======================================\n";
}

/* =========================================================
   Apply one player's turn
   ========================================================= */
void applyTurn(
    int playerNo,
    int dice,
    int total,
    int &pos,
    bool &started,
    int sHead[], int sTail[], int sCount,
    int lFoot[], int lTop[], int lCount
) {
    cout << "Player " << playerNo << " rolled: " << dice << "\n";

    if (!started) {
        if (dice == 6) {
            started = true;
            pos = 1;
            cout << "Player " << playerNo << " entered board at cell 1.\n";
        } else {
            cout << "Player " << playerNo << " needs 6 to start.\n";
        }
        return;
    }

    int next = pos + dice;
    if (next <= total) {
        pos = next;
    } else {
        cout << "Player " << playerNo << " move skipped (beyond " << total << ").\n";
    }

    int t = snakeAt(pos, sHead, sTail, sCount);
    if (t != -1) {
        cout << "Player " << playerNo << ": oops, snake got you!!! (" << pos << " -> " << t << ")\n";
        pos = t;
        return;
    }

    int top = ladderAt(pos, lFoot, lTop, lCount);
    if (top != -1) {
        cout << "Player " << playerNo << ": you got lucky (" << pos << " -> " << top << ")\n";
        pos = top;
    }
}

/* =========================================================
   Recursive gameplay (2 players)
   Also prints iteration positions every turn
   ========================================================= */
void gameLoopRec(
    int turnNo,        // 1,2,3...
    int currentPlayer, // 1 or 2
    int total, int M, int N,
    int &p1Pos, int &p2Pos,
    bool &p1Started, bool &p2Started,
    int sHead[], int sTail[], int sCount,
    int lFoot[], int lTop[], int lCount,
    int &seed
) {
    if (p1Pos == total) {
        cout << "\n🏆 Player 1 wins!\n";
        return;
    }
    if (p2Pos == total) {
        cout << "\n🏆 Player 2 wins!\n";
        return;
    }

    cout << endl;
    displayBoardDiagramStyle(M, N, p1Pos, p2Pos);

    waitForEnter();
    int dice = randInRange(seed, 1, 6);

    if (currentPlayer == 1) {
        applyTurn(1, dice, total, p1Pos, p1Started, sHead, sTail, sCount, lFoot, lTop, lCount);
    } else {
        applyTurn(2, dice, total, p2Pos, p2Started, sHead, sTail, sCount, lFoot, lTop, lCount);
    }

    // Required: tell positions each iteration
    cout << "Position: P1=" << p1Pos << " , P2=" << p2Pos << "\n";

    if (p1Pos == total) {
        cout << "\n Player 1 wins!\n";
        return;
    }
    if (p2Pos == total) {
        cout << "\n Player 2 wins!\n";
        return;
    }

    int nextPlayer = (currentPlayer == 1) ? 2 : 1;
    gameLoopRec(turnNo + 1, nextPlayer, total, M, N,
                p1Pos, p2Pos, p1Started, p2Started,
                sHead, sTail, sCount, lFoot, lTop, lCount, seed);
}

/* =========================================================
   Required controller
   ========================================================= */
void startSnakeGame() {
    int M, N;
    cout << "Enter board rows (M) and columns (N): ";
    cin >> M >> N;
    cin.ignore();

    if (M < 2 || N < 2) {
        cout << "Invalid board size.\n";
        return;
    }

    int total = M * N;
    int count = N - 1; // per your task statement

    // Dynamic arrays
    int *snakeHead = new int[count];
    int *snakeTail = new int[count];
    int *ladderFoot = new int[count];
    int *ladderTop = new int[count];

    // pseudo-seed from inputs
    int seed = M * 1009 + N * 917 + total * 101;

    // generate snakes/ladders
    generateSnakesRec(0, count, total, snakeHead, snakeTail, ladderFoot, ladderTop, 0, seed);
    generateLaddersRec(0, count, total, snakeHead, snakeTail, count, ladderFoot, ladderTop, seed);

    int p1Pos = 0, p2Pos = 0;
    bool p1Started = false, p2Started = false;

    cout << "\n=== 2-Player Snake & Ladder Started ===\n";
    cout << "Rule: each player needs 6 to start.\n";
    cout << "Board numbering follows diagram style.\n";

    gameLoopRec(1, 1, total, M, N,
                p1Pos, p2Pos, p1Started, p2Started,
                snakeHead, snakeTail, count, ladderFoot, ladderTop, count, seed);

    delete[] snakeHead;
    delete[] snakeTail;
    delete[] ladderFoot;
    delete[] ladderTop;
}

int main() {
    startSnakeGame();
    return 0;
}
