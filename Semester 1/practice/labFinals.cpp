#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[100];
    int i=0;
    cout<<"enter n : ";
    while(true){
        cin>>n;
        if(n==0){
            break;
        }
        arr[i]=n;
        i++;
        if(i>99){
            break;
        }
    }
    cout<<endl;
    cout<<"total number of digits entered : "<<i<<endl<<endl;


    int positive = 0;
    int negative = 0;
    for(int j=0 ; j<i ; j++){
        if(arr[j]>0){
            positive++;
        }
        if(arr[j]<0){
            negative++;
        }
    }

    cout<<"total number of positive digits entered : "<<positive<<endl<<endl;

    cout<<"total number of negative digits entered : "<<negative<<endl<<endl;

    return 0;
}