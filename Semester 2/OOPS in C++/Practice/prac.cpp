#include<iostream>

using namespace std;

struct DOB{
    char day[35];
    char month[30];
    int year;
};

struct student{
    int roll_number;
    char name[35];
    int marks[5];
    DOB D1;
};

int main(){
    int n;
    cout<<"How many Students you want to enter : ";
    cin>>n;
    int total_marks = 0;
    int total_markss[n];
    student S[n];
    for(int i=0 ; i<n ; i++){
        cout<<"Enter detials of "<<i+1<<" Student : "<<endl;
        cout<<"Enter roll number : ";
        cin>>S[i].roll_number;
        cout<<"Enter name : ";
        cin>>S[i].name;
        for(int j=0 ; j<5 ; j++){
            cout<<"Enter marks of "<<j+1<<" subject : ";
            cin>>S[i].marks[j];
            total_marks += S[i].marks[j];
        }
        total_markss[i] = total_marks;
        total_marks = 0;
        cout<<"Enter the day you born : ";
        cin>>S[i].D1.day;
        cout<<"Enter the month you born : ";
        cin>>S[i].D1.month;
        cout<<"Enter the year you born : ";
        cin>>S[i].D1.year;
    }    
    int index = 0;
    int high = total_markss[0];
    for(int i=0 ; i<n ; i++){
        if(total_markss[i]>high){
            high = total_markss[i];
            index = i;
        }
    }
    cout<<"-----Topper Full record-----"<<endl;
    cout<<"Roll number : "<<S[index].roll_number<<endl;
    cout<<"Name : "<<S[index].name<<endl;
    for(int k=0 ; k<5 ; k++){
        cout<<"Marks of subject "<<k+1<<" : "<<S[index].marks[k]<<endl;
    }
    cout<<"Total marks : "<<total_markss[index]<<endl;
    cout<<"Day : "<<S[index].D1.day<<endl;
    cout<<"Month : "<<S[index].D1.month<<endl;
    cout<<"Year : "<<S[index].D1.year<<endl;

    return 0;
}