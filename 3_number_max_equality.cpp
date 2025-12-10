#include<iostream>

using namespace std;

int main(){
    int a , b, c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    int largest;
    if(a>b && a>c){
        largest = a;
    }
    else if(b>a && b>c){
        largest = c;
    }
    else{
        largest = c;
    }
    cout<<"largest number : "<<largest<<endl;
    if(a==b){
        cout<<"first and second number are equal;"<<a<<"="<<b<<endl;
    }
    if(a==c){
        cout<<"first and third number are equal;"<<a<<"="<<c<<endl;
    }
    if(b==c){
        cout<<"second and third number are equal;"<<b<<"="<<c<<endl;
    }
    cout<<endl;


    return 0;
}