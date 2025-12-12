#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter an integer n : ";
    do{
        cin>>n;
        if(n<1){
            cout<<"Invalid input! please again enter number : ";
        }
    }while(n<1);
    int sum = 0;
    int k;
    while(n!=0){
        k = n/10;
        sum = (n-(k*10)) + sum;
        n = n / 10;
    }
    cout<<"sum of digits of integer : "<<sum<<endl;


    return 0;
}