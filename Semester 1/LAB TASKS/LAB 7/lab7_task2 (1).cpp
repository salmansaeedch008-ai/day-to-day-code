#include <iostream> //header file
using namespace std;

int count = 0; // declare a global variable count initialized to zero
int fibonacci(int n)
{
    count++;
    int result; // uses a local variable to store the result before returning it
    if (n == 0)
    { // case for F(0)
        result = 0;
    }
    else if (n == 1)
    {
        result = 1; // caase for F(1)
    }
    else
    {
        result = fibonacci(n - 1) + fibonacci(n - 2); // recursive step , returns the nth Fibonacci number.
    }
    return result;
}

int main()
{
    int n;
    do
    {
        cout << "enter a number n = ";
        cin >> n; // asking user to enter positive integer n
        if (n < 0)
        {
            cout << "invalid input! pleae again "; // error handling for negative values
        }
    } while (n < 0); // asking the user again to enter n if he enters negative values
    cout << "Fibonacci Series : ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " "; // print the fibonacci series up to n terms using recursion
    } // the loop calls fibonacci(0),fibonacci(1), .... to fibonacci(n-1).
    cout << endl;

    cout << "function called = " << count << " times" << endl; // total number of recursive calls
    return 0;
}