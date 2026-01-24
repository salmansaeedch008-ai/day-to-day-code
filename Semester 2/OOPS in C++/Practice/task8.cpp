#include<iostream>

using namespace std;

union contact{
    long long int phone;
    char email[20];
};

struct person{
    string name;
    contact con;
};

int main(){
    int choice;
    person s[3];
    for(int i=0 ; i<3 ; i++){
        cout<<"Enter the details of person "<<i+1<<endl;
        cout<<"name : ";
        cin>>s[i].name;
        cout<<"Enter your choice for storing(1-phone , 2-email)"<<endl;
        cin>>choice;
        if(choice==1){
            cout<<"Phone number : ";
            cin>>s[i].con.phone;
        }
        else{
            cout<<"Email : ";
            cin>>s[i].con.email;
        }
    }

    for(int i=0 ; i<3 ; i++){
        cout<<"Details of person "<<i+1<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        if(choice==1){
            cout<<"phone : "<<s[i].con.phone;
        }
        else{
            cout<<"Email : "<<s[i].con.email;
        }
        cout<<endl;
    }

    return 0;
}