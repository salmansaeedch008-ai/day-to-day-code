#include <iostream>
using namespace std;

int absVal(int x) { return (x < 0) ? -x : x; }

void printLeftHalf(int j, int t, int pos) {
    if (pos > j) return;

    if (pos == 1) cout << "# ";
    else {
        int dots = j - t - 1;
        int idx = pos - 1;
        if (idx <= dots) cout << ". ";
        else cout << "* ";
    }

    printLeftHalf(j, t, pos + 1);
}

void printRightHalf(int j, int t, int pos) {
    if (pos > j) return;

    if (pos == j) cout << "#";
    else {
        int stars = t;
        if (pos <= stars) cout << "* ";
        else cout << ". ";
    }

    printRightHalf(j, t, pos + 1);
}

void printRows(int i, int j, int r) {
    if (r > 2 * i - 1) return;

    int t = i - 1 - absVal(i - r); // 0..i-1..0

    printLeftHalf(j, t, 1);
    cout << "| ";
    printRightHalf(j, t, 1);
    cout << "\n";

    printRows(i, j, r + 1);
}

// Prototype: void PrintPattern2(int i, int j);
void PrintPattern2(int i, int j) {
    if (i <= 0 || j <= 0) return;
    printRows(i, j, 1);
}

int main() {
    int i, j;
    cout << "Enter i and j: ";
    cin >> i >> j;
    PrintPattern2(i, j);
    return 0;
}
