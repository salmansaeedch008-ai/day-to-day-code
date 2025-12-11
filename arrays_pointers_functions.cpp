#include<iostream>

using namespace std;

void analyzearray(int *arr , int size){
    cout<<"address of first element of array : ";
    cout<<&arr[0]<<endl;
    cout<<"address of last element of array : ";
    cout<<&arr[size-1];
    for(int i=0 ; i<size ; i++){
        if(*(arr+i)%2!=0){
            *(arr+i)=(*(arr+i))*2;
        }
    }
}

int main(){

    int size;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[size];
    int *ptr = arr;
    cout<<"enter "<<size<<" numbers for array : ";
    for(int i=0 ; i<size ; i++){
        cin>>*(ptr+i);
    }
    cout<<endl;
    cout<<"original array : "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    analyzearray(ptr , size);

    cout<<endl;
    cout<<"updated array : "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<*(ptr+i)<<" ";
    }



    return 0;
}