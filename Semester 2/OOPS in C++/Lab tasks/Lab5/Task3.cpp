#include<iostream>
 
using namespace std;
 
class Bank{             //creating the class
    private:
 
    double balance = 0;             //private attributes
 
    public:
 
    void deposit(double);      //public function prototypes
    void withdraw(double);
};
 
void Bank::deposit(double dep){          //out of line function
    balance += dep;                         //adding deposited money to balance
    cout<<"Money deposited Successfully"<<endl;
    cout<<"New balance : "<<balance;
}
 
void Bank::withdraw(double wid){
    if(wid>balance){             //exception handling
        cout<<"Insufficient balance!!";
    }
    else{
        balance -= wid;         //subtracting the withdraw money from balance if withdraw amount should be lee\ss than balnace
        cout<<"Money withdraw Successfully"<<endl;
        cout<<"New balance : "<<balance;
    }
}
 
int main(){
    int choice;
    double wid , dep;
    Bank b;                     //creating object of class
    do{
        cout<<endl;
        cout<<"---------BANK SYSTEM-----------\n";      //creating menu
        cout<<" 1 - Deposit money \n";
        cout<<" 2 - Withdraw money \n";
        cout<<" 3 - Exit ";
 
        cout<<endl;
 
        cout<<"Enter your choice : ";      //input choive
        do{
            cin>>choice;
            if(choice<0 || choice>3){      //exception handling
                cout<<"Invalid choice!! please again enter your choice!!";
            }
        }while(choice<0 || choice>3);
 
        if(choice == 1){              
            cout<<"Enter amount to deposit : ";
            do{
                cin>>dep;                       //exception handling of negative amount of money
                if(dep<0){
                    cout<<"Negative amount cannot be deposited!! please enter positive amount of deposit !! : ";
                }
            }while(dep<0);
            b.deposit(dep);                 //calling the function
        }
 
        if(choice == 2){
            cout<<"Enter amount to withdraw : ";
            cin>>wid;
            b.withdraw(wid);        //calling th function withdraw if user enters 2
        }
 
 
    }while(choice!=3);       // loop will end if user enters 3
 
 
    return 0;
}
