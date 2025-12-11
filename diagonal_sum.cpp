#include<iostream>

using namespace std;

int main(){
    int size = 3;
    int arr[size][size];

    cout<<"enter 9 numbers for array : ";
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int diagonal_sum = 0;
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
            if(i==j){
                diagonal_sum = diagonal_sum + arr[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"sum of diagonal elements : "<<diagonal_sum<<endl;
    return 0;
}