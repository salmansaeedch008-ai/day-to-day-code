#include<iostream>//header file
using namespace std;

int main(){
    float arr[6][6]={                   //2D array
        {1 , 2 , 1 , 2 , 1 , 2},
        {1 , 2 , 3 , 4 , 5 , 6},
        {0 , -1 , -2.5 , -4 , -5.5 , -8},
        {-3.5 , -4.5 , -6 , -2 , -9.5 , -9},
        {-2.9 , 10 , 11 , 12 , -17.5 , 9},
        {3.8 , 8 , 15 , -6 , 2 , 8}                //initialized 6 by 6 array 
    };

    for(int i=0 ; i<6 ; i++){
        for(int j=0 ; j<6 ; j++){
            if(arr[i][j]<0){    //condition for checking negative values
                cout<<"arr["<<i<<"]["<<j<<"]"<<" = "<<arr[i][j]<<"   "<<endl;    // for printing negative values given in the table
            }
        }
    }
    cout<<endl<<endl;

    for(int i=0 ; i<6 ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<" "<<arr[i][j]<<"  ";     //printing of diagonal and lower diagonal numbers given in the table 
        }
        cout<<endl;
    }
    return 0;
}