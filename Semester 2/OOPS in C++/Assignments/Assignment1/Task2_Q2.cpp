#include <iostream>
using namespace std;

bool isVowel(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

// Prototype: int findVowels(char* str);
int findVowels(char* str) {
    if (*str == '\0') return 0;
    return (isVowel(*str) ? 1 : 0) + findVowels(str + 1);
}

int main() {
    char s[500];
    cout << "Enter string:\n";
    cin.getline(s, 500);
    cout << "Vowels = " << findVowels(s) << "\n";
    return 0;
}
