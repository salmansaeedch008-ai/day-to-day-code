#include<iostream>
#include<string>
using namespace std;

int main(){
    string x;
    cout<<"enter a string : ";
    getline(cin,x);
    int a = x.length();                //will also count spaces.
    cout<<"length of string : ";
    cout<<a<<endl;
    cout<<"first chracter of string : ";
    cout<<x[0]<<endl;
    cout<<"last chracter of string : ";
    cout<<x[a-1];


    return 0;
}