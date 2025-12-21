#include <iostream>

using namespace std;

int main()
{
    int start = 3, end = 99;
    double sum = 0;
    for (int i = start; i <= end; i += 2)
    {
        sum = sum + ((1.0 / i) * (1.0 / i) * (1.0 / i) * (1.0 / i));
    }
    cout << sum;

    return 0;
}
