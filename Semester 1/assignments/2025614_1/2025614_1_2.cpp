#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    float R;
    cout<<"Enter the radius of the sphere:";
    cin>>R;//input radius

    float pi = 3.14;// pi value

    float area = 4 * pi * pow(R,2);//area calculation
    cout<<"Area of sphere="<< area <<endl;

    float volume = (4.0/3.0) * pi * pow(R,3);//volume calculation
    cout<<"Volume of sphere="<< volume <<endl;

    return 0;
}