#include <iostream>
using namespace std;

int len(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

// Prototype: char* removeSentence(char* Para, char* input);
char* removeSentence(char Para[], char input[]) {
    int n = len(Para), m = len(input);
    int pos = -1;

    if (m == 0 || n == 0 || m > n) return Para;

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && Para[i + j] == input[j]) j++;
        if (j == m) { pos = i; break; }
    }

    if (pos != -1) {
        for (int i = pos; i + m <= n; i++) {
            Para[i] = Para[i + m];
        }
    }
    return Para;
}

int main() {
    char para[500], input[200];

    cout << "Enter paragraph:\n";
    cin.getline(para, 500);

    cout << "Enter substring to remove:\n";
    cin.getline(input, 200);

    cout << "Result:\n" << removeSentence(para, input) << "\n";
    return 0;
}
