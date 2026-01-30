#include<iostream>

using namespace std;


struct student{
    int roll_number;
    char name[40];
    int age;
    char address[60];
};

void input(student s1[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<"Enter details of student "<<i+1<<" : "<<endl;
        cout<<"Enter roll numbre : ";
        cin>>s1[i].roll_number;
        cout<<"Enter name : ";
        cin>>s1[i].name;
        cout<<"Enter age : ";
        cin>>s1[i].age;
        cout<<"Enter address : ";
        cin>>s1[i].address;
        cout<<endl;
    }
}

void output1(student s1[] , int n){
    for(int i=0 ; i<n ; i++){
        if(s1[i].age==14){   //print name of students having age 14
            cout<<"Name having age 14 : "<<s1[i].name<<endl;
        }
    }
    cout<<endl;
}

void output2(student s1[] , int n){
    for(int i=0 ; i<n ; i++){
        if(s1[i].roll_number%2==0){
            cout<<"Students with even roll number : "<<s1[i].roll_number<<endl;
        }
    }
    cout<<endl;
}

void display_all_students(student s1[] ,  int n){
    cout<<"------student details------"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<"Details of student "<<i+1<<" : "<<endl;
        cout<<"Roll number : "<<s1[i].roll_number<<endl;
        cout<<"Name : "<<s1[i].name<<endl;
        cout<<"Age : "<<s1[i].age<<endl;
        cout<<"Address : "<<s1[i].address<<endl;
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"how many students you want to enter : ";
    cin>>n;
    student s1[n];
    input(s1 , n);
    output1(s1 , n);
    output2(s1 , n);
    display_all_students(s1 , n);


    return 0;
}