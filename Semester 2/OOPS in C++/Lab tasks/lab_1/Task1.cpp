#include<iostream>

using namespace std;

struct Mobile{
    char name[30];
    int year;
    float price;
};

int main(){
    Mobile m1;
    cout<<"Enter name of mobile : ";
    cin>>m1.name;
    cout<<"Enter model year of mobile : ";
    cin>>m1.year;
    cout<<"Enter price of mobile : ";
    cin>>m1.price;

    cout<<endl;

    cout<<"Name : "<<m1.name<<endl;
    cout<<"Year : "<<m1.year<<endl;
    cout<<"Price : "<<m1.price<<endl;

    return 0;
}