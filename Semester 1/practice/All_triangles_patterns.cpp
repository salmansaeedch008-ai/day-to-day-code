#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "/////////////////////////////////" << endl;
    cout << endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "////////////////////////////////" << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "///////////////////////////////" << endl;
    cout << endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "///////////////////////////////" << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }

    cout << endl;
    cout << "////////////////////////////" << endl;
    cout << endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    cout << "////////////////////////////" << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "=====THANK YOU=====" << endl;
    cout << "MADE BY SALMAN SAEED" << endl;

    return 0;
}
