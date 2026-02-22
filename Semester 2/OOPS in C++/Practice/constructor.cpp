#include<iostream>

using namespace std;

class Student{
    private:
    string name;
    int marks;
    public:
    Student(string na , int ma){
        name = na;
        marks = ma;
    }
    void display(){
        if (marks>=50){
            cout<<"Pass!";
        }
        else{
            cout<<"Failed";
        }
    }
};

int main(){
    string name;
    int marks;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your marks : ";
    cin>>marks;

    Student s1(name , marks);
    s1.display();
}