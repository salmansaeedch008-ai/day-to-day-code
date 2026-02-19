// Muhammad Salman Saeed 2025614 assignment#1

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Return length of a C-style char array
int str_length(char* s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

// Find first normal (non-circular) occurrence of substring in paragraph
int find_substring_index(char* paragraph, char* substring) {
    int paraLen = str_length(paragraph);
    int subLen  = str_length(substring);

    if (subLen == 0) return 0;
    if (subLen > paraLen) return -1;

    for (int i = 0; i <= paraLen - subLen; i++) {
        int j = 0;
        while (j < subLen && paragraph[i + j] == substring[j]) j++;
        if (j == subLen) return i;
    }
    return -1;
}

// Task 1.1: remove first occurrence of input from Para
char* removeSentence(char* Para, char* input) {
    int startPos = find_substring_index(Para, input);

    // If not found, assignment asks to return original array
    if (startPos == -1) return Para;

    int paraLen = str_length(Para);
    int inLen   = str_length(input);
    if (inLen == 0) return Para;

    // Dynamic array as required
    char* updated = new char[paraLen - inLen + 1];

    int i = 0, k = 0;
    while (Para[i] != '\0') {
        if (i == startPos) i += inLen;   // skip matched part
        else updated[k++] = Para[i++];
    }
    updated[k] = '\0';
    return updated;
}

// Task 1.2: circular substring search
bool FindSubString(char* Str, char* substr, int & start, int & end) {
    int n = str_length(Str);
    int m = str_length(substr);

    if (m == 0) {
        start = 0;
        end = -1;
        return true;
    }

    if (n == 0 || m > n) {
        start = -1;
        end = -1;
        return false;
    }

    // Try matching from every possible starting index
    for (int i = 0; i < n; i++) {
        int j = 0;
        while (j < m) {
            int idx = (i + j) % n;   // circular movement
            if (Str[idx] != substr[j]) break;
            j++;
        }

        if (j == m) {
            start = i;
            end = (i + m - 1) % n;
            return true;
        }
    }

    start = -1;
    end = -1;
    return false;
}


//helper (task2_1)
int calculateDivisorsSum(int number, int divisor = 1) {
    // Base case: If the divisor reaches the number itself, stop recursion
    if (divisor == number) return 0;

    // If divisor is a divisor of the number, include it in the sum
    if (number % divisor == 0) {
        return divisor + calculateDivisorsSum(number, divisor + 1);
    }

    // Otherwise, move to the next divisor
    return calculateDivisorsSum(number, divisor + 1);
}
//task2_1
bool isperfectNumber(int n)
{
  // A number must be greater than 1 to be perfect
    if (n <= 1) return false;

    // A perfect number is equal to the sum of its proper divisors (excluding itself)
    return (calculateDivisorsSum(n, 1) == n);
}


//task2_2
int findVowels(char* str)
{
 // Base case: If the string is empty (null terminator), return 0
    if (*str == '\0') return 0;

    int vowelCount = 0;
    
    // Check if the current character is a vowel (both lowercase and uppercase)
    if (*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' || *str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U') {
        vowelCount = 1;
    }

    // Recursively call countVowels for the next character in the string
    return vowelCount + findVowels(str + 1);
}

//task2_3
int pascal(int row, int col)
{
 // Base case: Check for invalid row or column position
    if (col > row || row < 0 || col < 0) {
        return -1;
    }


    // Base case: The first and last elements in a row are always 1
    if (col == 0 || col == row) {
        return 1;
    }

    // Recursive case: The value is the sum of the two values directly above it
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}
//helper (task2_4)
void printSpace(int spaces) {
    if (spaces <= 0) return;
    cout << " ";
    printSpace(spaces - 1);
}
//task2_4
void PrintPattern1(int start, int end)
{
    // Base case: Stop if current exceeds the point where the pattern should stop
    if (start > (end - start)) return;

    // Print spaces for the first star in the current row
    printSpace(end - 2 * start);
    cout << "*" << endl;  // Print the first star

    // Recursive call to print the pattern below the current row
    PrintPattern1(start + 1, end);

    // Print the second star if it's not the middle row
    if (end- 2 * start != 0) {
        printSpace(end - 2 * start);
        cout << "*" << endl;
    }
}
//helper1(task2_5)
void printAsterisks(int totalAsterisks, int currentAsterisks)
{
    // Base case: When the current number of asterisks matches totalAsterisks, stop recursion
    if (totalAsterisks == currentAsterisks)
    {
        return;
    }
    // Recursively call to print the previous asterisk
    printAsterisks(totalAsterisks - 1, currentAsterisks);
    cout << " *";  // Print an asterisk
}
//helper2(task2_5)
void printSpaces(int totalSpaces)
{
    // Base case: When no more spaces are left to print, stop recursion
    if (totalSpaces == 0)
    {
        return;
    }
    // Recursively call to print the previous space
    printSpaces(totalSpaces - 1);
    cout << "  ";  // Print two spaces
}
//helper3(task2_5)
void printRow(int n, int currentRow)
{
    // Base case: When the current row reaches 0, stop recursion
    if (currentRow == 0)
    {
        return;
    }
    // Recursively call to process the previous row
    printRow(n, currentRow - 1);
    
    // For rows within the upper half of the diamond
    if (currentRow <= n)
    {
        // Print the left part of the diamond row (asterisks)
        printAsterisks(n, currentRow - 1);
        // Print spaces between the two asterisks
        printSpaces((currentRow - 1) * 2);
        // Print the right part of the diamond row (asterisks)
        printAsterisks(n, currentRow - 1);
        cout << endl;  // Move to the next line after printing the row
    }
    // For rows in the lower half of the diamond (mirrored part)
    else
    {
        int adjustedRow = (2 * n) - currentRow;  // Adjust the row for the lower half
        // Print the left part of the diamond row (asterisks)
        printAsterisks(n, adjustedRow);
        // Print spaces between the two asterisks
        printSpaces(adjustedRow * 2);
        // Print the right part of the diamond row (asterisks)
        printAsterisks(n, adjustedRow);
        cout << endl;  // Move to the next line after printing the row
    }
}
//task2_5
void printHollowDiamond(int n)
{
 // Call the printRow function for the hollow diamond with n rows
    printRow(n, n * 2);
}



//helper functions (task2_6)
// Function to print spaces recursively
void printspace(int spaces) {
    if (spaces <= 0) return;  // Base case
    cout << "  ";  // Print two spaces
    printspace(spaces - 1);  // Recursive call
}

// Function to print the hash symbol "#"
void printHash() {
    cout << "# ";  // Print hash with space
}

// Function to print dashes recursively
void printDash(int dashes) {
    if (dashes <= 0) return;  // Base case
    cout << ". ";  // Print dash with space
    printDash(dashes - 1);  // Recursive call
}

// Function to print stars recursively
void printStar(int stars) {
    if (stars <= 0) return;  // Base case
    cout << "* * ";  // Print a star with spaces
    printStar(stars - 1);  // Recursive call
}


//task2_6
void PrintPattern2(int start, int end)
{
 if (end <= (start - end)) return;  // Base case

    // Print upper part of the pattern
    printspace(end - (start - end));
    printHash();
    printDash(end - (start - end));
    printStar(start - end);
    cout << "| ";
    printStar(start - end);
    printDash(end - (start - end));
    printHash();
    cout << endl;

    PrintPattern2(start + 1, end);  // Recursive call

    // Print lower part of the pattern after recursion
    if (start - 2 * end != -1) {
        printspace(end - (start - end));
        printHash();
        printDash(end - (start - end));
        printStar(start - end);
        cout << "| ";
        printStar(start - end);
        printDash(end - (start - end));
        printHash();
        cout << endl;
    }
    else return;
}


//task3


/* -------------------- Data structures -------------------- */
struct Snake {
    int head, tail;
};

struct Ladder {
    int bottom, top;
};

/* -------------------- Small helper functions -------------------- */
void waitForEnter() {
    cout << "Press ENTER to roll...";
    cin.get();
}

// Check if a value already exists in any endpoint array pair
bool usedInPairs(int a[], int b[], int count, int x) {
    for (int i = 0; i < count; i++) {
        if (a[i] == x || b[i] == x) return true;
    }
    return false;
}

// Make sure snake/ladder points do not overlap with each other
bool usedEverywhere(
    int sHead[], int sTail[], int sCount,
    int lFoot[], int lTop[], int lCount,
    int x
) {
    return usedInPairs(sHead, sTail, sCount, x) ||
           usedInPairs(lFoot, lTop, lCount, x);
}

/* -------------------- Board mapping (zig-zag numbering) -------------------- */
// Converts row/column (bottom-based) to cell number
int cellFromRowColBottomBased(int r, int c, int N) {
    if (r % 2 == 0) return r * N + c + 1;      // left to right
    else return r * N + (N - c);               // right to left
}

/* -------------------- Generate snakes and ladders -------------------- */
void generateSnakes(int count, int total, int sHead[], int sTail[], int lFoot[], int lTop[], int lCount) {
    int i = 0;
    while (i < count) {
        int head = rand() % (total - 2) + 2;     // [2 .. total-1]
        int tail = rand() % (head - 1) + 1;      // [1 .. head-1]

        if (head <= tail || head == total) continue;
        if (usedEverywhere(sHead, sTail, i, lFoot, lTop, lCount, head)) continue;
        if (usedEverywhere(sHead, sTail, i, lFoot, lTop, lCount, tail)) continue;

        sHead[i] = head;
        sTail[i] = tail;
        i++;
    }
}

void generateLadders(int count, int total, int sHead[], int sTail[], int sCount, int lFoot[], int lTop[]) {
    int i = 0;
    while (i < count) {
        int foot = rand() % (total - 2) + 1;             // [1 .. total-2]
        int top  = rand() % (total - foot - 1) + foot + 1; // [foot+1 .. total-1]

        if (top <= foot) continue;
        if (usedEverywhere(sHead, sTail, sCount, lFoot, lTop, i, foot)) continue;
        if (usedEverywhere(sHead, sTail, sCount, lFoot, lTop, i, top)) continue;

        lFoot[i] = foot;
        lTop[i] = top;
        i++;
    }
}

/* -------------------- Snake/Ladder lookup -------------------- */
int snakeAt(int pos, int sHead[], int sTail[], int sCount) {
    for (int i = 0; i < sCount; i++) {
        if (sHead[i] == pos) return sTail[i];
    }
    return -1;
}

int ladderAt(int pos, int lFoot[], int lTop[], int lCount) {
    for (int i = 0; i < lCount; i++) {
        if (lFoot[i] == pos) return lTop[i];
    }
    return -1;
}

/* -------------------- Display board -------------------- */
void displayBoard(int M, int N, int p1Pos, int p2Pos) {
    cout << "\n================ BOARD ================\n";

    // Print top row to bottom row so board looks natural
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

/* -------------------- Apply one player turn -------------------- */
void applyTurn(
    int playerNo, int dice, int total,
    int &pos, bool &started,
    int sHead[], int sTail[], int sCount,
    int lFoot[], int lTop[], int lCount
) {
    cout << "Player " << playerNo << " rolled: " << dice << "\n";

    // Player must roll 6 to enter
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

    // If move goes beyond last cell, skip this move
    if (next <= total) pos = next;
    else {
        cout << "Player " << playerNo << " move skipped (beyond " << total << ").\n";
        return;
    }

    // Check snake first
    int t = snakeAt(pos, sHead, sTail, sCount);
    if (t != -1) {
        cout << "Player " << playerNo << ": Oops! Snake (" << pos << " -> " << t << ")\n";
        pos = t;
        return;
    }

    // Then check ladder
    int top = ladderAt(pos, lFoot, lTop, lCount);
    if (top != -1) {
        cout << "Player " << playerNo << ": Lucky! Ladder (" << pos << " -> " << top << ")\n";
        pos = top;
    }
}

/* -------------------- Main game controller -------------------- */
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
    int count = N - 1;  // As required in your assignment logic

    // Dynamic arrays for endpoints
    int *snakeHead = new int[count];
    int *snakeTail = new int[count];
    int *ladderFoot = new int[count];
    int *ladderTop = new int[count];

    srand((unsigned)time(0)); // seed once

    generateSnakes(count, total, snakeHead, snakeTail, ladderFoot, ladderTop, 0);
    generateLadders(count, total, snakeHead, snakeTail, count, ladderFoot, ladderTop);

    int p1Pos = 0, p2Pos = 0;
    bool p1Started = false, p2Started = false;
    int currentPlayer = 1;

    cout << "\n=== 2-Player Snake & Ladder Started ===\n";
    cout << "Rule: each player needs 6 to start.\n";

    while (true) {
        displayBoard(M, N, p1Pos, p2Pos);

        waitForEnter();
        int dice = rand() % 6 + 1;

        if (currentPlayer == 1) {
            applyTurn(1, dice, total, p1Pos, p1Started, snakeHead, snakeTail, count, ladderFoot, ladderTop, count);
            currentPlayer = 2;
        } else {
            applyTurn(2, dice, total, p2Pos, p2Started, snakeHead, snakeTail, count, ladderFoot, ladderTop, count);
            currentPlayer = 1;
        }

        // Show positions after every turn
        cout << "Position: P1=" << p1Pos << " , P2=" << p2Pos << "\n";

        if (p1Pos == total) {
            cout << "\nPlayer 1 wins!\n";
            break;
        }
        if (p2Pos == total) {
            cout << "\nPlayer 2 wins!\n";
            break;
        }
    }

    // Clean up dynamic memory
    delete[] snakeHead;
    delete[] snakeTail;
    delete[] ladderFoot;
    delete[] ladderTop;
}


