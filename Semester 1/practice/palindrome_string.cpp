#include <iostream>
#include <string>
using namespace std;

bool ispalindrome(string s){
    string reverse;
    int l = s.length();

    for(int i = l - 1; i >= 0; i--){
        reverse.push_back(s[i]);
    }

    return s == reverse;
}

int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;

    if(ispalindrome(word)){
        cout << "Entered word is a palindrome." << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}
