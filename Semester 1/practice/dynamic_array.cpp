#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter initial size of array: ";
    cin >> n;

    // Step 1: Create dynamic array
    int* arr = new int[n];

    // Step 2: Input elements
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 3: Ask if user wants to add more elements
    char choice;
    cout << "Do you want to add more elements? (y/n): ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y') {
        int m;
        cout << "How many more elements do you want to add? ";
        cin >> m;

        // Step 4: Create new bigger array
        int* newArr = new int[n + m];

        // Copy old elements
        for(int i = 0; i < n; i++) {
            newArr[i] = arr[i];
        }

        // Input new elements
        cout << "Enter " << m << " new elements: ";
        for(int i = n; i < n + m; i++) {
            cin >> newArr[i];
        }

        // Delete old array and point arr to newArr
        delete[] arr;
        arr = newArr;
        n = n + m;
    }

    // Step 5: Display final array
    cout << "Final array elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free memory
    delete[] arr;

    return 0;
}
