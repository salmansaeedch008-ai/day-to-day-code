#include<iostream>

using namespace std;

void swap(int &a ,int  &b);

int main(){
    int num1 , num2;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    cout<<"values before swapping : "<<endl;
    cout<<"number 1 = "<<num1<<endl;
    cout<<"number 2 = "<<num2<<endl;

    swap(num1 , num2);

    cout<<"values after swapping : "<<endl;
    cout<<"number 1 : "<<num1<<endl;
    cout<<"number 2 : "<<num2<<endl;

    return 0;
}

void swap(int &a ,int  &b){
    int temp = b;
    b = a;
    a = temp;
}