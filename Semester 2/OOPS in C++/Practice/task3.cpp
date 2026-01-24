#include<iostream>

using namespace std;

int main(){
    union data{
        int i;
        float f;
    };

    data d;
    d.i = 34;
    cout<<"Integer value : "<<d.i<<endl;

    d.f = 99;
    cout<<"Floating value : "<<d.f<<endl;

    cout<<"Integer value after assigning floating value : "<<d.i<<endl;


    return 0;
}