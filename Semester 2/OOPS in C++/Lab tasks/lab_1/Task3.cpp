#include<iostream>

using namespace std;

union SensorData{
    float temperature;
    float pressure;
};

int main(){
    SensorData p;
    cout<<"Enter temperature : ";
    cin>>p.temperature;
    cout<<"Enter Pressure : ";
    cin>>p.pressure;

    cout<<endl;

    cout<<"Temperature : "<<p.temperature<<endl;
    cout<<"Pressure : "<<p.pressure<<endl;
    
    return 0;
}
