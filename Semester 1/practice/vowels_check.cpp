#include<iostream>

using namespace std;

int main(){
    string line;
    int count =  0;
    cout<<"enter a line : ";
    getline(cin , line);
    int r = line.length();
    for(int i=0 ; i<r ; i++){
        if(line[i]=='a' || line[i]=='e' || line[i]=='i'  || line[i]=='o' || line[i]=='u'  || line[i]=='A'  || line[i]=='O'  || line[i]=='E' ||line[i]=='I'  || line[i]=='U'){
            count++;
        }
    }
    cout<<"total number of vowels in string : "<<count<<endl;


    return 0;
}