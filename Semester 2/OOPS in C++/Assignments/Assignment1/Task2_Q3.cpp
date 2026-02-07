#include <iostream>
using namespace std;

// Prototype: int pascal(int row, int col);
// 0-based indexing
int pascal(int row, int col) {
    if (col == 0 || col == row) return 1;
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

int main() {
    int row, col;
    cout << "Enter row and col (0-based): ";
    cin >> row >> col;
    cout << "Value = " << pascal(row, col) << "\n";
    return 0;
}
