#include<iostream>

using namespace std;

int main(){
    int units;
    int bill;
    cout<<"enter number of units consumed : ";
    do{
        cin>>units;
        if(units<1){
            cout<<"Invalid input! please again enter number of units : ";
        }
    }while(units<1);

    if(units>0 && units<101){
        bill = units*10;                  //rs10 per unit
    }

    if(units>100 && units<301){
        units = units - 100;
        bill = (100*10)+(units*15);        //rs 10 for first 100 and 15 for 101 to 300
    }

    if(units>300){
        units = units - 300;
        bill = (100*10) + (200*15) +(units*20);
    }

    if(bill>500){
        bill = bill-(0.05*bill);
    }
    cout<<"total bill : "<<bill;


    return 0;
}