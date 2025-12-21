#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;

    if (n <= 1)
    {
        cout << "not prime number";
        return 0;
    }

    bool prime = true;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
    {
        cout << "prime number";
    }
    else
    {
        cout << "not prime number";
    }

    return 0;
}
