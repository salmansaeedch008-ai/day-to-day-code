#include <iostream>

using namespace std;

int main()
{

    float age;
    cout<<"Enter your age in years:";
    cin>>age;//input age

    float months = (age * 12);//calculation of age in months
    cout<<"your age in months="<<months<<endl;

    float days = (age * 365);//calculation of age in days
    cout<<"your age in days="<<days<<endl;

    return 0;

}