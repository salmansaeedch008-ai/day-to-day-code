#include<iostream>

using namespace std;

int main(){
    int num1 , num2 ;
    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;
    char ch;
    cout<<"Enter the operation you want to perform (+ , * , - , / , %)";
    do{
        cin>>ch;
        if(ch!='+' && ch!='-' && ch!='/' && ch!='*' && ch!='%'){
            cout<<"Invalid operation! please enter from (+ , * , - , / , %)";
        }
    }while(ch!='+' && ch!='-' && ch!='/' && ch!='*' && ch!='%');
    
    if(ch=='+'){
        cout<<"you have choosed addition : "<<endl<<num1<<"+"<<num2<<"="<<num1+num2;
    }
    else if(ch=='-'){
        cout<<"you have choosed subtraction : "<<endl<<num1<<"-"<<num2<<"="<<num1-num2;
    }
    else if(ch=='/'){
        if(num2==0){
            cout<<"any number cannot be divided by zero"<<endl;
            cout<<"please again entaer number 2 : ";
            do{
                cin>>num2;
                if(num2==0){
                    cout<<"you have again entered zero . please again enter : ";
                }
            }while(num2==0);
        }
        cout<<"you have choosed division : "<<endl<<num1<<"/"<<num2<<"="<<num1/num2;
    }
    else if(ch=='*'){
        cout<<"you have choosed multiplication : "<<endl<<num1<<"*"<<num2<<"="<<num1*num2;
    }
    else{
        cout<<"you have choosed remainder : "<<endl<<num1<<"%"<<num2<<"="<<num1%num2;
    }

    return 0;
}