#include <iostream>
#include<string>

using namespace std;

const int rows = 2;                                            //using two global variables
const int num_members = 10;

void DISPLAY(string arr[rows][num_members], int cols);

void SWAP(string arr[rows][num_members], int i, int j);                                            //function prototypes
                                                                                        
void SELECTION_SORT(string arr[rows][num_members], int cols);

void TRANSFER_NON_COVID(string family[rows][num_members], int cols, string iffat[rows][num_members], int &iffatCount);

int main()
{

    string family[rows][num_members] = {
        {"Amna", "Father", "Mother", "Sister", "Brother1", "Brother2", "Grandfather", "Grandmother", "Uncle", "Aunt"},
        {"P", "N", "P", "N", "P", "P", "N", "N", "N", "N"}};                           //created array of aminas family

    cout<<"Original family details (Amna's house) : "<<endl<<endl; 
    DISPLAY(family, num_members);                                          //calling function
    cout<<endl<<endl<<endl; 

    SELECTION_SORT(family, num_members);                                            //calling function

    cout<<"After sorting by COVID-19 status (P first, then N) : "<<endl<<endl;;
    DISPLAY(family, num_members);                                      //calling function
    cout<<endl<<endl<<endl;

    //TRANSFER NON-COVID MEMBERS TO IFFAT'S HOUSE
    string iffat[rows][num_members];         //created array of iffat house to transfer healthy people of amina's house
    int iffatCount = 0;

    TRANSFER_NON_COVID(family, num_members , iffat, iffatCount);                   //calling function

    cout<<"Iffat's house (only Non-COVID members) : "<<endl<<endl;
    DISPLAY(iffat, iffatCount);                                                //calling function

    return 0;
}

void DISPLAY(string arr[rows][num_members], int cols)
{
    cout << "Names : ";
    for (int j = 0; j < cols; j++)
    {                                                        //display names
        cout << arr[0][j];
        if (j != cols - 1)
        {
            cout << " , ";
        }
    }
    cout<<endl<<endl;
    cout << "Status : ";
    for (int j = 0; j < cols; j++)
    {                                                          //dispaly status of covid 19
        cout << arr[1][j];
        if (j != cols - 1)
        {
            cout << " , ";
        }
    }
    cout << endl;
}

void SWAP(string arr[rows][num_members], int i, int j)
{
    string temp = arr[0][i];
    arr[0][i] = arr[0][j];
    arr[0][j] = temp;                                 //swapping rows during sorting

    temp = arr[1][i];
    arr[1][i] = arr[1][j];
    arr[1][j] = temp;
}

void SELECTION_SORT(string arr[rows][num_members], int cols)
{
    for (int i = 0; i < cols - 1; i++)                                          //sort so that all "P" come before "N"
    {
        int Index = i;                                 // position where we want "P" if possible
        for (int j = i + 1; j < cols; j++)
        {                                                                         // We have to consider P better than N                
            if (arr[1][j] == "P" && arr[1][Index] == "N")
            {
                Index = j;
            }
        }
        if (Index != i)
        {
            SWAP(arr, i, Index);
        }
    }
}

void TRANSFER_NON_COVID(string family[rows][num_members], int cols, string iffat[rows][num_members], int &iffatCount)
{
                            
    iffatCount = 0;                                          //function to tranfer healthy members

    for (int i = 0; i < cols; i++)
    {
        if (family[1][i] == "N")
        {                                        // Non-COVID member
            iffat[0][iffatCount] = family[0][i]; // copy name
            iffat[1][iffatCount] = family[1][i]; // copy status N
            iffatCount++;
        }
    }
}