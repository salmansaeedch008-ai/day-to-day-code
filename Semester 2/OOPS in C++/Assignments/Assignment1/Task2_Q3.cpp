#include <iostream>
using namespace std;

// task2_3
int pascal(int row, int col)
{
    // Base case: invalid position
    if (col > row || row < 0 || col < 0) {
        cout << "Invalid position in Pascal's Triangle." << endl;
        return -1;
    }

    // Base case: edges are always 1
    if (col == 0 || col == row) {
        return 1;
    }

    // Recursive case
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

int main() {
    int row, col;

    cout << "Enter row index: ";
    cin >> row;

    cout << "Enter column index: ";
    cin >> col;

    int value = pascal(row, col);

    if (value != -1) {
        cout << "Value at (" << row << ", " << col << ") = " << value << endl;
    }

    return 0;
}
