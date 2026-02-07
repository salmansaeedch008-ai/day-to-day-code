#include <iostream>
using namespace std;

int len(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

// Prototype: bool FindSubString(char* Str, char* substr, int &start, int &end);
bool FindSubString(char Str[], char substr[], int& start, int& end) {
    int n = len(Str), m = len(substr);
    start = -1;
    end = -1;

    if (m == 0 || n == 0 || m > n) return false;

    for (int i = 0; i < n; i++) {
        int j = 0;
        while (j < m && Str[(i + j) % n] == substr[j]) j++;
        if (j == m) {
            start = i;
            end = (i + m - 1) % n;
            return true;
        }
    }
    return false;
}

int main() {
    char str[300], sub[300];
    int start, end;

    cout << "Enter main string:\n";
    cin.getline(str, 300);

    cout << "Enter substring:\n";
    cin.getline(sub, 300);

    bool found = FindSubString(str, sub, start, end);
    if (found) cout << "true, start=" << start << ", end=" << end << "\n";
    else cout << "false, start=-1, end=-1\n";

    return 0;
}
