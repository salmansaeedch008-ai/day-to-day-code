#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    float num;
    cout<<"Enter a number:";
    cin>>num; // input number

    float power;
    cout<<"Enter the power of the number:";
    cin>>power; //input power

    float result = pow(num,power);//calculation 

    cout<<"Result="<<result;

    return 0;
}