#include <iostream>
using namespace std;

float c_to_f(int n){
    float F;
    F = (n*(9/5.0))+(32);
    return F;
}

float k_to_f(int i){
    float F;
    F = (i - 273.15)*(9/5.0)+(32);
    return F;;
}


int main(){
    float celcius , kelvin;
    char scale;

    cout<<"enter C for c_to_f, and K for k_to_f=";
    cin>>scale;

    if (scale == 'k' || scale == 'k'){
        cout<<"enter the temperature in kelvin=";
        cin>>kelvin;
        if(kelvin<0){
            cout<<"on kelvin scale temperature should not be negative";
        }
        else{
            cout<<"temperature in fahrenhite="<<k_to_f(kelvin);
        }
    }
    else if (scale == 'c' || scale == 'C')
    {
        cout<<"enter the temperature in celcius=";
        cin>>celcius;
        if(celcius<-273.16){
            cout<<"on celcius scale temperatyre should not be less than -273.16";
        }
        else{
            cout<<"your temperature in fahrenhite="<<c_to_f(celcius);
        }
        
    }
    else{
        cout<<"invalid scale, default selecting celcius"<<endl;
        cout<<"enter the temperature in celcius=";
        cin>>celcius;
        cout<<"your temperature in fahrenhite="<<c_to_f(celcius);
    }


    return 0;
}