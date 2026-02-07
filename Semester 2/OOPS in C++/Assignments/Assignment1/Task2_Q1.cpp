#include <iostream>
using namespace std;

int sumDiv(int n, int d) {
    if (d == n) return 0;
    if (n % d == 0) return d + sumDiv(n, d + 1);
    return sumDiv(n, d + 1);
}

// Prototype: bool isperfectNumber(int n);
bool isperfectNumber(int n) {
    if (n <= 1) return false;
    return sumDiv(n, 1) == n;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << (isperfectNumber(n) ? "true" : "false") << "\n";
    return 0;
}
