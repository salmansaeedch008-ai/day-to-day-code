#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout << "enter the starting number : ";
    cin >> start;
    cout << "enter the ending number : ";
    cin >> end;
    float count = 0;
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum = sum + i;
        count++;
    }
    float average = sum / count;
    cout << "average of numbers : " << average << endl;
    return 0;
}