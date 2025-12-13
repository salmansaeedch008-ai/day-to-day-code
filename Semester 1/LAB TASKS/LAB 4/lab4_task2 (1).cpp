#include <iostream>

using namespace std;

int main(){
    string name , meter_id;
    int units , rpu , totalbill;

    cout<<"ENTER CUSTOMER NAME:";
    cin>>name;// input name

    cout<<"ENTER METER ID:";
    cin>>meter_id;//input meter id

    cout<<"ENTER UNITS CONSUMED:";
    cin>>units;//input units consumed

    if (units>0 && units<=100)
    {
        rpu = 5;//rate per unit
    }
    
    else if (units>100 && units<=200)//if first condition is false it will check this
    {
        rpu = 7;
    }

    else if (units>200 && units<=300)//if first two conditions are false it will check this

    {
        rpu = 10;
    }

    else if (units>300)//if first three conditions are false it will check this
    {
        rpu = 15;
    }

    else{//if all the conditions are false it will print else statement
    cout<<"enter valid number of units consumed";}
    totalbill = rpu*units;

   
    cout<<"======================================"<<endl<<endl;
    cout<<"    ELECTRICITY BILL RECEIPT      "<<endl<<endl;
    cout<<"======================================"<<endl<<endl;

    cout<<"COSTUMER NAME:"<<name<<endl<<endl;//output name
    cout<<"METER ID:"<<meter_id<<endl<<endl;//outout meter id
    cout<<"UNITS CONSUMED:"<<units<<endl<<endl;//output units consumed
    cout<<"RATE PER UNIT:"<<rpu<<endl<<endl;
    cout<<"----------------------------------"<<endl<<endl;
    cout<<"TOTAL BILL:"<<totalbill<<endl<<endl;//total bill
    cout<<"======================================"<<endl;

    return 0;

}