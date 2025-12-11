#include<iostream>
using namespace std;

const int r = 50;
const int c = 50;

void transpose(int arr[r][c] , int rows , int coloumns){
    for(int i = 0; i < rows; i++){
        for(int j = i + 1; j < coloumns; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){
    int rows , coloumns ;
    cout << "enter number of rows : ";
    cin >> rows;
    cout << "enter number of coloumns : ";
    cin >> coloumns;

    if(rows != coloumns){
        cout << "Transpose inside same array only works for square matrices!";
        return 0;
    }

    int arr[r][c];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < coloumns; j++){
            cout << "enter array : ";
            cin >> arr[i][j];
        }
    }

    cout << "original array : " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < coloumns; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    transpose(arr , rows , coloumns);

    cout << "\ntranspose of array " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < coloumns; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
