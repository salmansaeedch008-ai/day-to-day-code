#include <iostream>

using namespace std;

int main()
{
    float distance;
    cout<<"Enter the distance in km:";
    cin>>distance;

    float cd_70 = (distance/50.2);//cd_70 cover distance in litres of petrol
    cout<<"CD_70 can cover this distance in given litres of petrol="<<cd_70<<endl;

    float cg_125 = (distance/40.5);//cg_125 cover distance in litres of petrol
    cout<<"CG_125 can cover this distance in given litres of petrol="<<cg_125<<endl;

    return 0;

}
