#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter a number x:";
    cin >> x;//input x
    char op;
    cout << "enter an operator +  -  *  /  % =";
    cin >> op;//input any operator
    int y;
    cout << "enter a number y:";
    cin >> y;//input y
    switch (op)
    {
        case '+' :
        cout<<"result="<<x+y;//for addition
        break;
        case '-' :
        cout<<"result="<<x-y;//for subtraction
        break;
        case '*' :
        cout<<"result="<<x*y;//for multipication
        break;
        case '/' :
        if (y != 0)//any number cannot be divided by zero
        {
            cout<<"result="<<x/y;//for division
        }
        else
        {
            cout<<"enter a valid number";
        }
        break;
        case '%':
        cout<<"result="<<x%y;//for reminder
        break;

    }

    return 0;
}