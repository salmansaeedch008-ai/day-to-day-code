#include<iostream>

using namespace std;

class Bankaccount{   //create class
    int id;
    int balance;
    static int totalAccounts;   //static data member 
    public:
    Bankaccount(int id , int balance){  //parametrized constructor 
        this->id = id;   //using this pointer 
        this->balance = balance;
        totalAccounts++;  //increment account after calling constructor 
    };
    static int getTotalAccounts(){    //static function to get total accounts 
        return totalAccounts;
    }
};

int Bankaccount::totalAccounts = 0;  //initializing static member 

int main(){
    cout<<"Before any object creation Total accounts : ";
    cout<<Bankaccount::getTotalAccounts();   //displaying total accounts 
    cout<<endl;

    Bankaccount b1(1 , 100000);  //creating objects 
    Bankaccount b2(2, 300000);

    cout<<"After object creation Total accounts : ";
    cout<<b1.getTotalAccounts();

    return 0;
}
