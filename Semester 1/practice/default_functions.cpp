#include <iostream>
using namespace std;

double power(double base, int exp = 2);

int main() {
    double x;
    int n;

    cout << "Enter a base number: ";
    cin >> x;

    cout << "x^2 using default exponent = " << power(x) << endl;
    cout << "Enter exponent: ";
    cin >> n;
    cout << "x^n using given exponent = " << power(x, n) << endl;

    return 0;
}

double power(double base, int exp) {
    double result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
