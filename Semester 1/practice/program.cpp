#include<iostream>
using namespace std;

int main(){
    int n;
    int size = 100;
    int arr[size];
    int i=0 ;
    cout<<"enter n  : ";
    while(true){
        cin>>n;
        if(n==-1){
            break;
        }
        arr[i]=n;
        i++;
        if(i>99){
            break;
        }
    }
    cout<<endl<<endl;
    for(int j=0 ; j<i ; j++){
        cout<<arr[j]<<" ";
    }

    int sum = 0;
    for(int j=0 ; j<i ; j++){
        sum = sum + arr[j];
    }
    cout<<"sum of array : "<<sum<<endl<<endl;
    float average;

    average = sum/i;

    cout<<"average of array : ";
    cout<<average<<endl<<endl;

    int max = INT_MIN;
    int min = INT_MAX;

    for(int j=0 ; j<i ; j++){
        if(max<arr[j]){
            max = arr[j];
        }
        if(min>arr[j]){
            min = arr[j];
        }
    }

    cout<<"maximum number in array : "<<max<<endl;
    cout<<endl;
    cout<<"minimum number in array : "<<min<<endl;
    

    return 0;
}