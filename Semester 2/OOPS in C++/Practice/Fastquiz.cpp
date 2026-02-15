#include <iostream>

using namespace std;

struct customer{
    char name[45];
    int acccount_number;
    float balance;
};

void input(int size , customer *arr){
    for(int i=0 ; i<size ; i++){
        cout<<"Enter name of account "<<i+1<<" : ";
        cin>>arr[i].name;
        cout<<"Enter account number of account "<<i+1<<" : ";
        cin>>arr[i].acccount_number;
        cout<<"Enter balance of account "<<i+1<<" : ";
        cin>>arr[i].balance;
        cout<<endl;
    }
}

void display_names(int size , customer *arr){
    cout<<"Customers having account balance less than 200$ : "<<endl;
    for(int i=0 ; i<size ; i++){
        if(arr[i].balance<200){
            cout<<arr[i].name<<" ";
        }
    }
}

void add_balance(int size , customer *arr){
    for(int i=0 ; i<size ; i++){
        if(arr[i].balance>1000){
            arr[i].balance += 100;
        }
    }
    cout << "accounts with updated balances : "<<endl;
    cout<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i].name<<" : "<<arr[i].balance<<"Rs.";
    }
}

int main(){
    int size;
    cout<<"How many Accounts! : ";
    cin>>size;

    customer *arr = new customer[size];

    input(size , arr);
    cout<<endl;

    display_names(size , arr);
    cout<<endl;

    add_balance(size , arr);
    cout<<endl;


    return 0;
}