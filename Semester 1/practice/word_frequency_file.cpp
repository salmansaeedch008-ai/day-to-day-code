#include <iostream>
#include <fstream>
#include <map>
#include <cctype>
#include <string>
using namespace std;

string toLower(string s){
    for(char &c: s) c = tolower(c);
    return s;
}

int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if(!fin){ cout << "File not found!"; return 1; }

    map<string,int> freq;
    string word;
    while(fin >> word){
        // Remove punctuation
        string clean = "";
        for(char c: word){
            if(isalnum(c)) clean += c;
        }
        if(!clean.empty())
            freq[toLower(clean)]++;
    }

    for(auto &p: freq){
        fout << p.first << " : " << p.second << endl;
    }

    cout << "Word frequency saved to output.txt\n";

    return 0;
}
