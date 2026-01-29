#include<iostream>

using namespace std;

struct Employee{
    int id;
    string name;
    float salary;
};

int main(){
    int n;
    cout<<"Enter how many employees you want to enter : ";
    cin>>n;
    Employee E[n];
    Employee *Eptr = &E[0];
    for(int i=0 ; i<n ; i++){
        cout<<"Enter details of employee "<<i+1<<" : "<<endl;
        cout<<"Enter id : ";
        cin>>Eptr->id;
        cout<<"Enter name : ";
        cin>>Eptr->name;
        cout<<"Enter salaray : ";
        cin>>Eptr->salary;
        cout<<endl;
        Eptr++;
    }
    Eptr = &E[0];
    for(int i=0 ; i<n ; i++){
        cout<<"------Employee "<<i+1<<" ------"<<endl;
        cout<<"Id : "<<Eptr->id<<endl;
        cout<<"Name : "<<Eptr->name<<endl;
        cout<<"Salary : "<<Eptr->salary<<endl;
        cout<<endl;
        Eptr++;
    }
    Eptr = &E[0];
    for(int i=0 ; i<n ; i++){
        if(Eptr->salary>5000){
            Eptr->salary += ((Eptr->salary/100)*10);
        }
        Eptr++;
    }

    cout<<"-----UPDATED SALARIES-----"<<endl;
    Eptr = &E[0];
    for(int i=0 ; i<n ; i++){
        cout<<"------Employee "<<i+1<<" ------"<<endl;
        cout<<"Id : "<<Eptr->id<<endl;
        cout<<"Name : "<<Eptr->name<<endl;
        cout<<"Salary : "<<Eptr->salary<<endl;
        cout<<endl;
        Eptr++;
    }

    return 0;
}

