#include <iostream>
using namespace std;

// Define the enum for grades
enum Grade
{
    A,
    B,
    C,
    D,
    F
};

int main()
{
    char input;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> input;

    Grade g;

    // Convert input character to enum
    if (input == 'A')
        g = A;
    else if (input == 'B')
        g = B;
    else if (input == 'C')
        g = C;
    else if (input == 'D')
        g = D;
    else if (input == 'F')
        g = F;
    else
    {
        cout << "Invalid grade!" << endl;
        return 0;
    }

    // Decision making using if-else
    if (g == A)
        cout << "Excellent" << endl;
    else if (g == B)
        cout << "Good" << endl;
    else if (g == C || g == D)
        cout << "Pass" << endl;
    else if (g == F)
        cout << "Fail" << endl;

    return 0;
}
