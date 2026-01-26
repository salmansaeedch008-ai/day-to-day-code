#include<iostream>

using namespace std;

union Payment{
    float cash;
    int card_number;
};

int main(){
    Payment p;
    int choice;
    cout<<"Enter 1 from the following \n 1 - Cash amount \n 2 - Card number : ";
    do{
        cin>>choice;
        if(choice<1 || choice>2){
            cout<<"Invalid input! \n Enter 1 from the following \n 1 - Cash amount \n 2 - Card number : ";
        }
    }while(choice<1 || choice>2);

    if(choice==1){
        cout<<"PLease enter cash amount : ";
        cin>>p.cash;
        cout<<"Cash amount : "<<p.cash<<endl;
    }
    else{
        cout<<"please enter card number : ";
        cin>>p.card_number;
        cout<<"Card number : "<<p.card_number<<endl;
    }

    return 0;
}