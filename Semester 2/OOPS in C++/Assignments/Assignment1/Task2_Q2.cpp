#include <iostream>
using namespace std;

// task2_2
int findVowels(char* str)
{
    // Base case: end of string
    if (*str == '\0') return 0;

    int vowelCount = 0;

    // Check current character
    if (*str == 'a' || *str == 'A' ||
        *str == 'e' || *str == 'E' ||
        *str == 'i' || *str == 'I' ||
        *str == 'o' || *str == 'O' ||
        *str == 'u' || *str == 'U') {
        vowelCount = 1;
    }

    // Recursive call for next character
    return vowelCount + findVowels(str + 1);
}

int main() {
    const int MAX = 1000;
    char str[MAX];

    cout << "Enter a string: ";
    cin.getline(str, MAX);

    cout << "Number of vowels: " << findVowels(str) << endl;

    return 0;
}
