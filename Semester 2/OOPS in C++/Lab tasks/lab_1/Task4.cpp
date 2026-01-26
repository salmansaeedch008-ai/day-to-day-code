#include<iostream>

using namespace std;

enum TrafficLigth {Red , Yellow , Green};

int main(){
    TrafficLigth light = Green;

    switch(light){
        case Red:
        cout<<"Stop!!!!";
        break;

        case Yellow:
        cout<<"Ready!!!";
        break;

        case Green:
        cout<<"Go!!!!";
        break;
    }

    return 0;
}