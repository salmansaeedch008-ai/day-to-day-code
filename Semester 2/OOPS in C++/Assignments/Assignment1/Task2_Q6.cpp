#include <iostream>
using namespace std;

// Helper: prints single spaces recursively
void printSpace(int spaces) {
    if (spaces <= 0) return;
    cout << " ";
    printSpace(spaces - 1);
}

// Helper: prints "# "
void printHash() {
    cout << "# ";
}

// Helper: prints ". " recursively
void printDash(int dashes) {
    if (dashes <= 0) return;
    cout << ". ";
    printDash(dashes - 1);
}

// Helper: prints "* * " recursively
void printStar(int stars) {
    if (stars <= 0) return;
    cout << "* * ";
    printStar(stars - 1);
}

// task2_6
void PrintPattern2(int start, int end)
{
    if (end <= (start - end)) return;  // Base case

    // Upper part
    printSpace(end - (start - end));
    printHash();
    printDash(end - (start - end));
    printStar(start - end);
    cout << "| ";
    printStar(start - end);
    printDash(end - (start - end));
    printHash();
    cout << endl;

    PrintPattern2(start + 1, end);  // Recursive call

    // Lower part
    if (start - 2 * end != -1) {
        printSpace(end - (start - end));
        printHash();
        printDash(end - (start - end));
        printStar(start - end);
        cout << "| ";
        printStar(start - end);
        printDash(end - (start - end));
        printHash();
        cout << endl;
    }
}

int main() {
    int start, end;

    cout << "Enter start: ";
    cin >> start;
    cout << "Enter end: ";
    cin >> end;

    PrintPattern2(start, end);

    return 0;
}
