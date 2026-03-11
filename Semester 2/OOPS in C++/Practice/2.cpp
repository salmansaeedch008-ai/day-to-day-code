#include<iostream>

using namespace std;

int main(){
    int max = 3;
    int n = max;

    int arr[3];
    for (int i=0 ; i<max ; i++){
        cout<<"ENter value : ";
        cin>>arr[i];
    }

    char check;

    do{
        cout<<"Do you want to enter more values : Enter y for yess";
        cin>>check;

        if(check == 'y' || check == 'Y'){
            max = max + 1;

            int *new_arr = new int[max];
            for(int i=0 ; i<n ; i++){
                new_arr[i] = arr[i];
            }

            cout<<"Enter new value : ";
            cin>>new_arr[n];
            n++;
        }   
    }while(check == 'y' || check == 'Y');

    return 0;
}