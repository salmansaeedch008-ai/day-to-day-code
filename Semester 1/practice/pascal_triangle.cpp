#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int print = 1;
        for(int j=i ; j<=n ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
            cout<<print<<" ";
            print = print * (i-k)/k;
        }
        cout<<endl; 
    }




    return 0;
}