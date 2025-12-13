#include <iostream>
using namespace std;
int main(){
    int num , a;
    int reverse = 0;
    do{
        cout<<"Please enter a positive number = ";
        cin>>num;
        if(num<0){
            cout<<"error! ";
        }
    }while(num<=0);

    while(num>0){
        a = num % 10;
        reverse = (reverse*10)+a;
        num = num/10;
    }
    cout << "Reverse number = "<<reverse;
    return 0;
}