#include<iostream>
using namespace std;

const int MAXR = 50;
const int MAXC = 50;
const int MAXH = 50;

void displayarray(int rows , int coloumns , int height, int arr[MAXR][MAXC][MAXH]) {
    cout << "\nArray elements:\n";
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<coloumns ; j++){
            for(int k=0 ; k<height ; k++){
                cout << arr[i][j][k] << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main(){
    int rows , coloumns , height;
    cout<<"enter number of rows : ";
    cin>>rows;
    cout<<"enter number of coloumns : ";
    cin>>coloumns;
    cout<<"enter number of height : ";
    cin>>height;

    int arr[MAXR][MAXC][MAXH];  

    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<coloumns ; j++){
            for(int k=0 ; k<height ; k++){
                cout<<"enter value at index ["<<i<<"]["<<j<<"]["<<k<<"] : ";
                cin>>arr[i][j][k];
            }
        }
    }

    displayarray(rows , coloumns , height, arr);

    return 0;
}
