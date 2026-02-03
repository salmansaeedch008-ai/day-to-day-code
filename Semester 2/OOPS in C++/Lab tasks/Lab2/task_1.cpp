#include<iostream>      //header file

using namespace std;

#define SQUARE(c) ((c)*(c))     //pre processive directive

#define MAX(a , b)((a) > (b) ? (a) : (b))

int main(){
    int num1 , num2;
    cout<<"Enter number 1 : ";    //user input
    cin>>num1;
    cout<<"Enter number 2 : ";      //user inout
    cin>>num2;

    cout<<"--------SQUARES--------"<<endl;

    cout<<"Sqaure of "<<num1<<" : "<<SQUARE(num1)<<endl;     //using prepocessive directive which uses multiplication directly
    cout<<"Square of "<<num2<<" : "<<SQUARE(num2)<<endl;

    cout<<endl;

    cout<<"-----MAXIMUM NUMBER------"<<endl;
    cout<<"Maximum of two numbers : "<<MAX(num1 , num2)<<endl;    //using prepocessive directive which uses multiplication directly



    return 0;
}