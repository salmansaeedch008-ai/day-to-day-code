#include <iostream>
using namespace std;

// helper1(task2_5)
void printAsterisks(int totalAsterisks, int currentAsterisks)
{
    // Base case: stop when both become equal
    if (totalAsterisks == currentAsterisks)
    {
        return;
    }

    // Recursive call first (so stars print in correct order)
    printAsterisks(totalAsterisks - 1, currentAsterisks);
    cout << " *";
}

// helper2(task2_5)
void printSpaces(int totalSpaces)
{
    // Base case: no spaces left
    if (totalSpaces == 0)
    {
        return;
    }

    // Recursive call
    printSpaces(totalSpaces - 1);
    cout << "  ";
}

// helper3(task2_5)
void printRow(int n, int currentRow)
{
    // Base case
    if (currentRow == 0)
    {
        return;
    }

    // Process previous row first
    printRow(n, currentRow - 1);

    // Upper half
    if (currentRow <= n)
    {
        printAsterisks(n, currentRow - 1);
        printSpaces((currentRow - 1) * 2);
        printAsterisks(n, currentRow - 1);
        cout << endl;
    }
    // Lower half
    else
    {
        int adjustedRow = (2 * n) - currentRow;
        printAsterisks(n, adjustedRow);
        printSpaces(adjustedRow * 2);
        printAsterisks(n, adjustedRow);
        cout << endl;
    }
}

// task2_5
void printHollowDiamond(int n)
{
    printRow(n, n * 2);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    printHollowDiamond(n);

    return 0;
}
