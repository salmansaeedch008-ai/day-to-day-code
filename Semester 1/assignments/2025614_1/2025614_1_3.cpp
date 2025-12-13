#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a;;
    cout << "enter side length a:";
    cin >> a; // input length a

    float b;
    cout<<"enter sude lemgth b:";
    cin>>b;//input length b

    float c;
    cout<<"enter side length c:";
    cin>>c;//input length c

    float s;
    s = (a + b + c)/2.0;//calculation of s

    float answer = sqrt (s *(s-a) * (s-b) * (s-c));//calculation of area
    cout<<"Area of triangle="<<answer;

    return 0;
}