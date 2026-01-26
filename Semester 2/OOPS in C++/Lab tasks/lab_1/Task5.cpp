#include<iostream>

using namespace std;

struct Contact{
    int phone;
    char email[35];
};

struct Student{
    int RollNumber;
    char name[30];
    float gpa;
    Contact Detils;
};

int main(){
    Student s1;
    cout<<"Enter Roll number : ";
    cin>>s1.RollNumber;
    cout<<"Enter Name : ";
    cin>>s1.name;
    cout<<"Enter Gpa : ";
    cin>>s1.gpa;
    cout<<"Enter phone number : ";
    cin>>s1.Detils.phone;
    cout<<"Enter Email : ";
    cin>>s1.Detils.email;


    cout<<endl;

    cout<<"Roll Number : "<<s1.RollNumber<<endl;
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Gpa : "<<s1.gpa<<endl;
    cout<<"Phone Number : "<<s1.Detils.phone<<endl;
    cout<<"Email Id : "<<s1.Detils.email<<endl;

    return 0;
}