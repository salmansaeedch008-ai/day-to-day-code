#include<iostream>
#include "basic_ops.h"     //including header file
#include "scientific_ops.h"    //including header file

using namespace std;


int main(){
    double a , b;
    cout<<"Enter first number : ";       //user input
    cin>>a;
    cout<<"Enter number 2 : ";       //user input
    cin>>b;

    cout<<"----Basic Operations----"<<endl;
    cout<<"Addition : "<<add(a , b)<<endl;            //calling all the function from the header file                     
    cout<<"Subtraction : "<<subtract(a , b)<<endl;
    cout<<"Multiplication : "<<multiply(a , b)<<endl;
    cout<<"Division : "<<divide(a , b)<<endl;

    cout<<endl;

    cout<<"-----Scientific Operations-----"<<endl;
    cout<<"Power : "<<power(a , b)<<endl;
    cout<<"Square root of "<<a<<" : "<<squareroot(a)<<endl;
    cout<<"Square root of "<<b<<" : "<<squareroot(b)<<endl;
    cout<<"Log of "<<a<<" : "<<naturallog(a)<<endl;
    cout<<"Log of "<<b<<" : "<<naturallog(b)<<endl; 


    return 0;
}