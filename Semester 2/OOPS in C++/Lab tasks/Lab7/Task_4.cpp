#include<iostream>

using namespace std;

class Account{           //create class
    int acc_number;
    float balance;
    public:
    Account(int acc_number , float balance){        //parametrized constructor
        this->acc_number = acc_number;      //using this pointer 
        this->balance = balance;
    }

    float deposit(float balance);       //function prototypes 
    void comparebalance(Account obj);
};

float Account::deposit(float balance){
    cout<<"Amount deposited successfully";  //update balance using this pointer 
    return this->balance + balance;
}

void Account::comparebalance(Account obj){
    if(this->balance>obj.balance){  //comparing balance 
        cout<<"Account 1 has a higher balance ";
    }
    else{
        cout<<"Account 2 has a higher balance ";
    }
}
int main(){
    Account a1(1 , 32900);   //creating objects 
    Account a2(2 , 23874);

    a1.deposit(32000);   //depositing in one account 
    cout<<endl;

    a1.comparebalance(a2);    //comparing balance of both objects 


    return 0;
}
