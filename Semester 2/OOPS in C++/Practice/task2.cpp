#include<iostream>

using namespace std;

int main(){
    struct student{
        int RollNo;
        string Name;
        float Cgpa;
    };

    student s[3];

    for(int i=0 ; i<3 ; i++){
        cout<<"enter the details of student "<<i+1<<endl;
        cout<<"Roll number : ";
        cin>>s[i].RollNo;
        cout<<"name : ";
        cin>>s[i].Name;
        cout<<"Cgpa : ";
        cin>>s[i].Cgpa;
        cout<<endl;
    }

    cout<<"Students with Cgpa greater than 3 : ";

    for(int i=0 ; i<3 ; i++){
        if(s[i].Cgpa > 3.0){
            cout<<"Roll number : "<<s[i].RollNo<<endl;
            cout<<"Name : "<<s[i].Name<<endl;
            cout<<"Cgpa : "<<s[i].Cgpa<<endl;
        }
    }


    return 0;
}