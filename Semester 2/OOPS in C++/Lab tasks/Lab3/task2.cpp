#include<iostream>

using namespace std;

struct student{        //creating struct
    string name;
    int roll_number;
    float cgpa;
};

int main(){
    int num;
    cout<<"How many student's data you want to enter  : ";
    cin>>num;     //asking the user for number of students

    student *s = new student[num];    //creating dynamic array of students as entered by user
    for(int i=0 ; i<num ; i++){
        cout<<"Enter name of "<<i+1<<" student : ";
        cin>>s[i].name;    //input name
        cout<<"Enter roll number of "<<i+1<<" student : ";
        cin>>s[i].roll_number;  //input roll number 
        cout<<"Enter cgpa of "<<i+1<<" student : ";
        cin>>s[i].cgpa;      //enter cgpa 
        cout<<endl;
    }

    float average_cgpa = 0;     //initializing to zero
    for(int i=0 ; i<num; i++){
        average_cgpa += s[i].cgpa;    //adding all cgpas of students 
    }

    average_cgpa = average_cgpa / num;      //computing average salary

    cout<<"Average cgpa : "<<average_cgpa<<endl;

    float topper_cgpa = s[0].cgpa;
    int index = 0; 

    for(int i=0 ; i<num ; i++){
        if(s[i].cgpa>topper_cgpa){
            topper_cgpa = s[i].cgpa;
            index = i;           //finding topper cgpa and index of topper
        }
    }

    cout<<endl;
    cout<<"Toppers cgpa : "<<topper_cgpa<<endl;       //dispalying all the vlaues
    cout<<"Topper founded at index = "<<index<<endl;

    delete []s;

    cout << "\n2025614 - Salman Saeed\n";

    return 0;
}