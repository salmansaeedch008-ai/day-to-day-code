#include <iostream>
using namespace std;

void drawBoard(char c1, char c2, char c3, char c4, char c5, char c6, char c7, char c8, char c9) {
    cout << "\n";
    cout << " " << c1 << " | " << c2 << " | " << c3 << endl;
    cout << "---+---+---" << endl;
    cout << " " << c4 << " | " << c5 << " | " << c6 << endl;
    cout << "---+---+---" << endl;
    cout << " " << c7 << " | " << c8 << " | " << c9 << endl;
    cout << "\n";
}

bool checkWin(char c1, char c2, char c3, char c4, char c5, char c6, char c7, char c8, char c9) {
    // rows
    if ((c1==c2 && c2==c3) || (c4==c5 && c5==c6) || (c7==c8 && c8==c9))
        return true;
    // columns
    if ((c1==c4 && c4==c7) || (c2==c5 && c5==c8) || (c3==c6 && c6==c9))
        return true;
    // diagonals
    if ((c1==c5 && c5==c9) || (c3==c5 && c5==c7))
        return true;

    return false;
}

bool isFull(char c1, char c2, char c3, char c4, char c5, char c6, char c7, char c8, char c9) {
    return (c1!='1' && c2!='2' && c3!='3' &&
            c4!='4' && c5!='5' && c6!='6' &&
            c7!='7' && c8!='8' && c9!='9');
}

int main() {
    char c1='1', c2='2', c3='3', c4='4', c5='5', c6='6', c7='7', c8='8', c9='9';
    int player = 1;
    char mark;
    int choice;
    bool gameOver = false;

    cout << "=== TIC TAC TOE ===" << endl;
    cout << "Player 1 (X) - Player 2 (O)\n";

    while (!gameOver) {
        drawBoard(c1, c2, c3, c4, c5, c6, c7, c8, c9);

        player = (player % 2 == 1) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        cout << "Player " << player << ", enter a number (1-9): ";
        cin >> choice;

        if (choice == 1 && c1 == '1') c1 = mark;
        else if (choice == 2 && c2 == '2') c2 = mark;
        else if (choice == 3 && c3 == '3') c3 = mark;
        else if (choice == 4 && c4 == '4') c4 = mark;
        else if (choice == 5 && c5 == '5') c5 = mark;
        else if (choice == 6 && c6 == '6') c6 = mark;
        else if (choice == 7 && c7 == '7') c7 = mark;
        else if (choice == 8 && c8 == '8') c8 = mark;
        else if (choice == 9 && c9 == '9') c9 = mark;
        else {
            cout << "Invalid move! Try again.\n";
            player--;
        }

        if (checkWin(c1, c2, c3, c4, c5, c6, c7, c8, c9)) {
            drawBoard(c1, c2, c3, c4, c5, c6, c7, c8, c9);
            cout << "Player " << player << " (" << mark << ") wins! 🎉\n";
            gameOver = true;
        } else if (isFull(c1, c2, c3, c4, c5, c6, c7, c8, c9)) {
            drawBoard(c1, c2, c3, c4, c5, c6, c7, c8, c9);
            cout << "It's a draw!\n";
            gameOver = true;
        }

        player++;
    }

    cout << "Game over.\n";
    return 0;
}
