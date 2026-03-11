#include<iostream>

using namespace std;

int main(){
    int capacity = 5;
    int count = capacity;

    int *arr = new int[capacity];

    for(int i=0 ; i<capacity ; i++){
        cout<<"ENter vALUR : ";
        cin>>arr[i];
    }

    char check;

    do{
        cout<<"DO you want to enter more values : ";
        cin>>check;

        if(check == 'y' || check == 'Y'){
            if (count == capacity){
                capacity = capacity * 2;
            }
            int *new_array = new int[capacity];
            for(int i=0 ; i<count ; i++){
                new_array[i] = arr[i];
            }
            delete []arr;
            arr = new_array;
            cout<<"ENter new value : ";
            cin>>arr[count];
            count++;
        }
    }while(check == 'y' || check == 'Y');

    for(int i=0 ; i<count ; i++){
        cout<<arr[i];
    }

    return 0;
}