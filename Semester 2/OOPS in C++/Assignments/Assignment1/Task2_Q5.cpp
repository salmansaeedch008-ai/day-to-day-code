#include <iostream>
using namespace std;

void printN(char ch, int n) {
    if (n <= 0) return;
    cout << ch;
    printN(ch, n - 1);
}

void lineHollow(int leftStars, int innerSpaces) {
    printN('*', leftStars);
    if (innerSpaces > 0) printN(' ', innerSpaces);
    printN('*', leftStars);
    cout << "\n";
}

void up(int n, int i) {
    if (i == n) return;
    if (i == 0) {
        printN('*', 2 * n - 1);
        cout << "\n";
    } else {
        int left = n - i;
        int spaces = 2 * i - 1;
        lineHollow(left, spaces);
    }
    up(n, i + 1);
}

void down(int n, int i) {
    if (i < 0) return;
    if (i == 0) {
        printN('*', 2 * n - 1);
        cout << "\n";
    } else {
        int left = n - i;
        int spaces = 2 * i - 1;
        lineHollow(left, spaces);
    }
    down(n, i - 1);
}

// Prototype: void printHollowDiamond(int n);
void printHollowDiamond(int n) {
    if (n <= 0) return;
    up(n, 0);
    down(n, n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printHollowDiamond(n);
    return 0;
}
