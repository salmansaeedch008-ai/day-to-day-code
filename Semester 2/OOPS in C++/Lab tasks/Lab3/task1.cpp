#include<iostream>

using namespace std;

int main(){
    int fixed_array_size = 5;  //fixed array has 5 size
    int dynamic_array_size = 7;

    int fixed_array[5];  //fixed array has 5 size
    for(int i=0 ; i<fixed_array_size ; i++){
        cout<<"Enter "<<i+1<<" element for fixed array : ";
        cin>>fixed_array[i];        //input numbers for fixed array 
    }

    cout<<endl;
    cout<<"Representing Fixed array : ";

    for(int i=0 ; i<fixed_array_size ; i++){
        cout<<fixed_array[i]<<" ";
    }
    cout<<endl<<endl;

    int *dynamic_array = new int[dynamic_array_size];       //dynamic array of sixe 7
    for(int i=0 ; i<dynamic_array_size ; i++){
        cout<<"Enter "<<i+1<<" element for dynamic array : ";
        cin>>dynamic_array[i];      //input numbers for dynamic array
    }

    cout<<endl;
    cout<<"Represeting dynamic array : ";

    for(int i=0 ; i<dynamic_array_size ; i++){
        cout<<dynamic_array[i]<<" ";
    }

    delete []dynamic_array;     //deleting dynamic array

    cout << "\n2025614 - Salman Saeed\n";
    
    return 0;
}