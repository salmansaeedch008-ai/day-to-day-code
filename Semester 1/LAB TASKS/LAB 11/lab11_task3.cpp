#include<iostream>     //header file 

using namespace std;

int main(){
    int n;
    cout<<"how many chracters are there in a word : ";              
    do{
        cin>>n;                     //input number of words

        if(n<1 || n>50){
            cout<<"invalid input please again enter number : ";                //if number of words greater than 50 or less than 0 then again take input
        }
    }while(n<1 || n>50);

    char arr[n];                                                    //initializing an array 
    cout<<"enter a string : ";
    for(int i=0 ; i<n ; i++){                                     //input the string of n chracters 
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"original string : ";
    for(int i=0 ; i<n ; i++){                                                      //printing original string
        cout<<arr[i]; 
    }

    char *start = &arr[0];

    char *end = &arr[n-1];

    while(start<end){
        char temp = *start;
        *start = *end;                                                             //reversing the string 
        *end = temp;
        start++;
        end--;
    }
    cout<<endl;
    cout<<"reversed string : ";
    for(int i=0 ; i<n ; i++){                                            //printing the reversed string 
        cout<<arr[i]; 
    }

    return 0;
}