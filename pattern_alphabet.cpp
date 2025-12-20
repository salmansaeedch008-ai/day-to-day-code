#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    char ch = 'a';

    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<endl;
    ch='A';
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}