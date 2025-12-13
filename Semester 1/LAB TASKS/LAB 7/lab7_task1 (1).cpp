#include <iostream> // header file
using namespace std;
int main()
{
    int arr[8]; // declaring an array
    cout << "Enter eight numbers : ";
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i]; // taking input of all the numbers of array from user
        if (arr[i] % 2 == 0)
        {                    // checks if number is even
            arr[i] = arr[i]; // so number remains same
        }
        else
        {
            arr[i] = arr[i] + 1; // if it is odd adding one to convert it into even
        }
    }
    cout << "updated array : ";
    for (int j = 0; j < 8; j++)
    {
        cout << arr[j] << " "; // displaying the updated array containing all even numbers
    }
    int updatedArraySum = 0;
    for (int i = 0; i < 8; i++)
    {
        updatedArraySum = updatedArraySum + arr[i]; // calculating the sum of all  elements of updated array
    }
    cout << endl;
    int totaloperationSum = 0; // initializing total operation sum to zero
    for (int i = 0; i < 8; i += 2)
    { // loop through the array taking 2 elements at a time
        float a = arr[i];
        float b = arr[i + 1];
        // perform all operations
        int sum = a + b;
        int diff = a - b;
        int prod = a * b;
        float div; // taking variable float because if second number is biggerthan first one it would give answer in points

        if (b != 0)
        { // checking if second number of vry pair is not zero
            div = a / b;
        }
        else
        {
            div = 0; // if it would be zero then it will skip division means the result would be zero of that particular pair
        }

        cout << "pair(" << a << "," << b << "):";
        cout << "Sum=" << sum << ", " << "Diff=" << diff << ", " << "prod=" << prod << ", " << "Div=" << div << endl;

        totaloperationSum = totaloperationSum + sum + diff + prod + div; // add all the results of sum , product , divide , difference of every pair in one variable
    }
    cout << endl;

    cout << "Final total of all operations=" << totaloperationSum << endl; // displaying the total of all operations stored in a singel variable

    cout << "sum of all updated array elements=" << updatedArraySum << endl; // dispalying the sum of all the elements of updated array

    return 0;
}