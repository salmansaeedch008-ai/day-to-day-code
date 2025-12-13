#include<iostream>   //header file
using namespace std;

void swap(int *a, int *b);  //function prototype

void double_array(int *arr , int size); //function prototype


int main(){
    int a , b;
    cout<<"Enter two numbers to be swapped : ";
    cin>>a>>b;
    cout<<"Before swapping : "<<endl;  //printing values before swapping
    cout<<"1st number : "<<a<<endl;
    cout<<"2nd number : "<<b<<endl;

    swap(&a,&b);    //function call by passing address of variables

    cout<<"After swapping : "<<endl;     //printing values after swapping
    cout<<"1st number : "<<a<<endl;
    cout<<"2nd number : "<<b<<endl;

    cout<<endl;

    int n;
    cout<<"Enter size of array : ";
    do{
        cin>>n;
        if(n<3){    //asking for size again if size of array less than 3
            cout<<"Size should be at least 3. Please enter again : ";
        }
    }while(n<3);   //loop runs until user enters size of at least 3

    cout<<endl;

    int arr[n];  //declaring array of size n.

    for(int i=0 ; i<n ; i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];   //taking array elements as input
    }
    cout<<endl;

    int *ptr;
    ptr = arr;  //pointing to first element of array.

    cout<<"array elements with locations and address (original) : "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<"Index "<<i<<" Value = "<<*ptr<<" , "<<"Address = "<<ptr<<endl; //printing index, value and address of each element
        ptr++;  //moving to next element.
    }

    cout<<endl;
    ptr = arr;  //resetting pointer to first element of array.

    double_array(ptr , n);   //function call by passing address of first element of array and size of array

    cout<<"Array after doubling each element : "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<*ptr<<" ";  //printing the array after doubling each element
        ptr++;  //moving to next element
    }

    cout<<endl;
    cout<<endl;
    ptr = arr;  //resetting pointer to first element of array.

    cout<<"array elements with locations and address after doubling each element : "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<"Index "<<i<<" Value = "<<*ptr<<" , "<<"Address = "<<ptr<<endl; //printing index, value and address of each element
        ptr++;  //moving to next element.
    }

    cout<<endl;

    cout<<"Top three maximum values : "<<endl;

    for(int i=0 ; i<3 ; i++){
        int max = *arr;   //assuming first element is maximum
        int index = 0;    //index of maximum elements
        int *ptr_store_addresses_maximum;
        ptr_store_addresses_maximum = arr;  //storing address of first element initially
        for(int j=1 ; j<n ; j++){
            if(*(arr + j) > max){   //comparing each element with current maximum
                max = *(arr + j);   //updating maximum
                index = j;          //updating index of maximum
            }
        }
        cout<<"Maximum "<<i+1<<" : "<<max<<" at index "<<index<<endl;  //printing the maximum value
        *(arr + index) = -9999;   //setting the found maximum to a very small value to find next maximum in next iteration
    }



    return 0;
}

    void swap(int *a, int *b){ 
    int temp = *a;  //swapping the values at the addresses
    *a = *b;
    *b = temp;
}

void double_array(int *arr , int size){
    for(int i=0 ; i<size ; i++){
        arr[i] = arr[i]*2;   //doubling each element of array
    }

}