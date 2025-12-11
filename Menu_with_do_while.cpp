#include<iostream>

using namespace std;

int main(){
    int choice;
    do{
        cout<<"---------------------"<<endl;
        cout<<"1- Square a number"<<endl;
        cout<<"2- Cube a number"<<endl;
        cout<<"3- Exit from program"<<endl;
        cout<<"---------------------"<<endl;

        cout<<"Please choose from the above menu : ";
        do{
            cin>>choice;
            if(choice<1 || choice>3){
                cout<<"invalid input! please again enter your choice : ";
            }
        }while(choice<1 || choice>3);

        if(choice == 3){
            cout<<"exiting the program ...  Bye Bye ";
            return 0;
        }

        long long int number;
        cout<<"enter a number : ";
        cin>>number;

        if(choice == 1){
            cout<<"you have choosed square of a number"<<endl;
            cout<<"square of "<<number<<" is : "<<number*number;
        }

        if(choice ==2){
            cout<<"you have choosed cube of a number"<<endl;
            cout<<"square of "<<number<<" is : "<<number*number*number;
        }

        cout<<endl<<endl;
    }while(choice == 1 || choice == 2 || choice == 3);

    return 0;
}