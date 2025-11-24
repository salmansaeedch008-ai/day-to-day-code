#include<iostream> //header file
using namespace std;

int main(){
int arr[5]={10,20,30,40,50}; //initializing the array
int *ptr = arr; //pointing to first element of array
cout<<"array element using pointer arithematics : "<<endl;
for(int i=0 ; i<5 ; i++){
cout<<"Element "<<i<<" at address "<<ptr<<" : "<<*ptr<<endl; //printing the address and value at that address
ptr++; //moving to next element
}

ptr = arr; //resetting pointer to first element
cout<<endl;

cout<<"accessing element using *(ptr+i) : "<<endl;
for(int i=0;i<5;i++){
cout<<"*(ptr+"<<i<<") : ";
cout<<*(ptr+i)<<endl; //printing value at that address using *(ptr+i)
}
return 0;
}
