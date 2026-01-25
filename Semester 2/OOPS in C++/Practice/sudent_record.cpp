#include<iostream>

using namespace std;

struct student{
    int id;
    char name[30];
    float gpa;
};

int main(){
    student s[3];

    for(int i=0 ; i<3 ; i++){
        cout<<"Enter the details of student "<<i+1<<endl;
        cout<<"Enter id : ";
        cin>>s[i].id;
        cout<<"Enter name : ";
        cin>>s[i].name;
        cout<<"Enter gpa : ";
        cin>>s[i].gpa;
        cout<<endl;
    }


    float max = s[0].gpa;
    int max_index = 0;
    for(int i=0 ; i<3 ; i++){
        if(s[i].gpa>max){
            max_index=i;
        }
    }

    cout<<"The student with highest gpa is : "<<endl;
    cout<<"Student id : "<<s[max_index].id<<endl;
    cout<<"Student name : "<<s[max_index].name<<endl;
    cout<<"Student gpa : "<<s[max_index].gpa<<endl;


    return 0;
}