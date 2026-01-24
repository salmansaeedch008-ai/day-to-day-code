#include <iostream>
using namespace std;

enum Day { Monday, Tuesday, Wednesday, Thursday, Friday };

int main() {
    int n;
    cout << "Enter a number (0 for Monday, 1 for Tuesday, ..., 4 for Friday): ";
    cin >> n;

    Day today = (Day)n;  // Convert number to enum

    cout << "You selected: ";
    if (today == Monday) cout << "Monday";
    else if (today == Tuesday) cout << "Tuesday";
    else if (today == Wednesday) cout << "Wednesday";
    else if (today == Thursday) cout << "Thursday";
    else if (today == Friday) cout << "Friday";
    else cout << "Invalid number!";

    cout << endl;

    return 0;
}
