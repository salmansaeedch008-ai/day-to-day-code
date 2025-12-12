#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    do{
        cin>>n;
        if(n<1 || n>100){
            cout<<"Invalid input! please again enter number : ";
        }
    }while(n<1 || n>100);

    int arr[n]; 

    for(int i=0 ; i<n ; i++){
        cout<<"enter "<<i+1<< " number for array : ";
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    }

    double average;

    average = sum / n ;

    cout<<"average of array : "<<average<<endl<<endl;

    int greater_than_average = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>average){
            greater_than_average++;
        }
    }

    cout<<"numbers greater than average : "<<greater_than_average;

    return 0;
}