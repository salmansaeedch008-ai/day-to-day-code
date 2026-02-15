#include <iostream>
using namespace std;

// helper (task2_1)
int calculateDivisorsSum(int number, int divisor = 1) {
    // Stop when divisor reaches number itself
    if (divisor == number) return 0;

    // Add divisor if it divides number
    if (number % divisor == 0) {
        return divisor + calculateDivisorsSum(number, divisor + 1);
    }

    // Otherwise move to next divisor
    return calculateDivisorsSum(number, divisor + 1);
}

// task2_1
bool isperfectNumber(int n) {
    // Perfect numbers are > 1
    if (n <= 1) return false;

    return (calculateDivisorsSum(n, 1) == n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isperfectNumber(n))
        cout << n << " is a perfect number." << endl;
    else
        cout << n << " is not a perfect number." << endl;

    return 0;
}
