#include<iostream>

using namespace std;

int main(){
    struct student{
        int rollNo;
        string name;
        float Cgpa;
    };
    student s1;
    cout<<"enter the roll number of student : ";
    cin>>s1.rollNo;
    cout<<"Enter the name of the student : ";
    cin>>s1.name;
    cout<<"Enter the cgpa of the student : ";
    cin>>s1.Cgpa;

    cout<<endl;
    cout<<"Roll number : "<<s1.rollNo<<endl;
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Cgpa : "<<s1.Cgpa;
    return 0;
}