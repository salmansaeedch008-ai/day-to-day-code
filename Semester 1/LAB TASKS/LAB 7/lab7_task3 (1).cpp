#include <iostream> //header file
using namespace std;

int delivered = 0; // initializing global variable to zero

void deliverPackage(int n)
{ // defined a recursive function
    if (n <= 0)
    { // if n will be zero than there will be no reamining packages , so all packages are delivered.
        cout << "All packages are delivered!" << endl;
        return;
    }
    cout << "Delivering package number " << n << endl; // delivery of  a prticular package number
    delivered++;                                       // if one package is delivered then the delivered will be increased by one , this will run until all packages are delivered.

    deliverPackage(n - 1); // recursive step ; calling the function.
}

int main()
{
    int totalPackages;

    do
    {
        cout << "enter number of packages : ";
        cin >> totalPackages; // taking total number of packages from input
        if (totalPackages < 0)
        {
            cout << "invalid input! please again"; // error handling if user enters a negative value
        }
    } while (totalPackages < 0); // asking the user again to enter input if input is negative

    deliverPackage(totalPackages); // calling the function in main

    cout << "Total deliveries made : " << delivered << endl; // displaying total deliveries made during the whlole ride

    return 0;
}