#include <iostream>

using namespace std;

int main(){
    int time;
    cout<<"enter the current time:";
    cin>>time;//input time

    if(time == 530)
    {
        cout<<"its fajar time"<<endl;//fajar time
    }
    else if (time == 1230)//if first condition is false it will check this
    {
        cout<<"its duhur time"<<endl;//duhur time
    }
    else if (time == 1520)//if first two conditions are false it will check this
    {
        cout<<"its Asr time"<<endl;//asr time
    }
    else if (time == 1720)//if first three conditions are false it will check this
    {
        cout<<"its Maghrib time"<<endl;//maghrib time
    }
    else if (time == 1900)//if first four conditions are false it will check this
    {
        cout<<"its Ishaa time"<<endl;//ishaa time
    }
    else
    cout<<"This is not a salah time,enter a valid salah time"<<endl;//if all the conditions are false it will print else statement

    return 0;
}