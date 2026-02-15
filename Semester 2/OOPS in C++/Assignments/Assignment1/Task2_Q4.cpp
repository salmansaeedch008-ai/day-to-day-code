#include <iostream>
using namespace std;

// helper (task2_4)
void printSpace(int spaces) {
    if (spaces <= 0) return;
    cout << " ";
    printSpace(spaces - 1);
}

// task2_4
void PrintPattern1(int start, int end)
{
    // Base case
    if (start > (end - start)) return;

    // Upper half (including middle)
    printSpace(end - 2 * start);
    cout << "*" << endl;

    // Recursive call
    PrintPattern1(start + 1, end);

    // Lower half (excluding middle duplicate)
    if (end - 2 * start != 0) {
        printSpace(end - 2 * start);
        cout << "*" << endl;
    }
}

int main() {
    int end;

    cout << "Enter end value: ";
    cin >> end;

    // start is usually 0 for this pattern
    PrintPattern1(0, end);

    return 0;
}
