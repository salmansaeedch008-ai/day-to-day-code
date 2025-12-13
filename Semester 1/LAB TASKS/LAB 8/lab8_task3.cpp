#include<iostream>   //Header file
using namespace std;

float final_level;      //declaring variable that tells us the final level of the water 
void startSystemLevel(float);   //declaring fuction
void fillTank(float);           //declaring function
void checkLevel(float);         //declaring function

void checkLevel(float level){
    if(level<40){
        cout<<"Water level is low! Filling the tank...."<<endl;    //water level will be low if it is filled less than 40%
        fillTank(level);    //calling the function so that it will rise the water level by increment of 10%
    }
    else{
        final_level=level;
        cout<<"Water tank is stable."<<endl;   // if initially the water level is above 40% then there will be no need to fill the water level and the initial water level will be the final water level
    }
}

void fillTank(float level){
    cout<<"Adding water to the tank ..."<<endl;   // if water level is less than 40 percent then it will increment by 10%
    level = level +10;
    checkLevel(level);   // calling the function
}

void startSystem(float level){
    cout<<"Starting water tank auto control system...."<<endl;    //this function will be run every time even if water level is below or above 40%
    checkLevel(level);
}

int main(){
    float water_level;
    do{
        cout<<"enter the initial level of water(0-100%) :";
        cin>>water_level;                 //input the initial water level
        if(water_level<0 || water_level>100){
            cout<<"invlaid input! please again ";
        }
    }while(water_level<0 || water_level>100);        //for controlling the neagative and greater than 100% input

    cout<<"----initial water level :"<<water_level<<"%----"<<endl;
    startSystem(water_level);            //calling the function.
    cout<<"----Final level of water is : "<<final_level<<"%----";

    return 0;
}

