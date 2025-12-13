#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    if(n>0){
        for(int i = 1; i<=n ; i++){ //outer loop from 1 to n
            for(int k= i ; k<n ; k++){
                cout<<" ";
            }
            for(int j = 1 ; j<=i ; j++){
                cout<<j<<" ";
            }
            cout<<endl; //moves to next line
        }
    }
    else{
        cout<<"invalid input. enter a positive integer";
    }
    return 0;
}