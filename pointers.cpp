#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter length of array : ";
    cin >> n;
    int arr[n];
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << " number for array :";
        cin >> ptr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                swap(ptr[j], ptr[j + 1]);
            }
        }
    }

    cout << "sorted array in aascending order : ";
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
