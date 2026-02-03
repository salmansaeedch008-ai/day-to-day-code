#include<iostream>

using namespace std;

int addition(int a , int b){     //three functions
    return a+b;
}

int subtraction(int a , int b){
    return a-b;
}

int multiplication(int a , int b){
    return a*b;
}


int main(){
    int num1 , num2 , choice;
    cout<<"Enter number 1 : ";   //user input
    cin>>num1;
    cout<<"Enter number 2 : ";    //user input
    cin>>num2;

    cout<<endl;

    cout<<"Enter choice from the following : \n 1 - Addition \n 2 - Subtraction \n 3 - Multiplication : "<<endl;
    do{
        cin>>choice;
        if(choice<1 || choice>3){
            cout<<"Invalid input! please again choose \n 1 - Addition \n 2 - Subtraction \n 3 - Multiplication : ";
        }
    }while(choice<1 || choice>3);     //exception handling

    cout<<endl;

    int (*fun_ptr)(int , int);        //function pointer

    if(choice==1){
        fun_ptr =  &addition;     //according to user choice pointer will store addrees of particular function
        cout<<"Addition : "; 
    }

    else if(choice==2){
        fun_ptr =  &subtraction;              //according to user choice pointer will store addrees of particular function
        cout<<"Subtraction : ";  
    }

    else{
        fun_ptr =  &multiplication;             //according to user choice pointer will store addrees of particular function
        cout<<"Multiplication : ";
    }

    cout<<fun_ptr(num1 , num2);  //printing the value

    return 0;
}