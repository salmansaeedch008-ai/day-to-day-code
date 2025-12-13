#include <iostream> //headr file

using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    do
    {
        cin >> n; // input number of rows
        if (n <= 0)
        {
            cout << "Please enter a positive integer : "; // validating input
        }
    } while (n <= 0);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " "; // for spaces
        } // for upper pyramid use of nested loops
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*"; // for pyramid of stars
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " "; // for spaces
        }
        for (int k = 2 * i - 1; k >= 1; k--)
        {                // reverse of a pyramid and deleting one row to create a proper diamond
            cout << "*"; // for pyramid of stars
        }
        cout << endl;
    }

    return 0;
}