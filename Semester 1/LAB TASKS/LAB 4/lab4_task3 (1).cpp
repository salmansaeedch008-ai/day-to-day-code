#include <iostream>

using namespace std;

int main(){
    int a , b , c;
    cout<<"Enter a positive number for multiplication:";
    cin>>a;//input a
    if(a<0)
    {
        cout<<"error , number cannot be negative";//number cannot be negative otherwise error will occur
    }
    if (a>=0)
    {
        cout<<"enter the range upto which you want the table to print:";
        cin>>b;
    }
    if (b<0)
    {
        cout<<"error , range cannot be negative"<<endl;//range is always positive in this case
    }
    c = 1;
    while(b>=c>0)//using while to make the table
    {
        cout<<a<<" x "<<c<<" = "<<a*c<<endl;
        c = c +1;
    }
    return 0;

}