#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"1. CNIC"<<endl;
    cout<<"2. Passport"<<endl;
    cout<<"Which type of ID you want to store : ";
    cin>>n;

    union id{
        int cnic;
        char passport;
    };

    id user;

    if(n==1){
        cout<<"Enter the id of cnic : ";
        cin>>user.cnic;
        cout<<"you have choosed cnic . your id : "<<user.cnic<<endl;
    }
    else{
        cout<<"enter the id of the passport : ";
        cin>>user.passport;
        cout<<"you have choosed passport . you id : "<<user.passport<<endl;
    }






    return 0;
}