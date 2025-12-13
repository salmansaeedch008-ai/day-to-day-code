#include <iostream>
using namespace std;
int bill_calculator(int);
int main(){
    char ch;
    int gallons;
    while(true)
    {
      do{
          cout<<"Enter positive number of gallons=";
          cin>>gallons;
          if(gallons<0){
             cout<<"Error!";
            }
         }while(gallons<0);      // for controlling negative number of gallons
      cout<<"your bill="<<bill_calculator(gallons)<<endl;
      cout<<"please enter c to continue and s to stop=";
      cin>>ch;
      if(ch == 'c' || ch == 'C'){
            continue;
        }
      else if(ch == 's' || ch == 'S'){
        cout<<"quitting the softwatare";
            break;
        }
            else{
        cout<<"you have not entered c for continue \n quiting...";
        }
    }


    return 0;
}


int bill_calculator(int gallons){     // using functions
    int remaining,bill;
    if(gallons==0){
        bill = 0;
    }
    else if(gallons>0 && gallons<=100){
        bill = gallons*50;
    }
    else if(gallons>100 || gallons<=350){
        remaining = gallons - 100;
        bill = (100*50) + (remaining*100);
    }
    else if(gallons>350 && gallons<=600){
        remaining = gallons - 350;
        bill = (100*50) + (250*100) +(remaining*150);
    }
    else{
        remaining = remaining - 600;
        bill= (100*50) + (250*100) + (250*150) + (remaining*250);
    }
    bill = (0.14*bill) + bill;     // adding 14 percent tax
    return bill;

}