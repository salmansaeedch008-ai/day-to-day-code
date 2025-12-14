#include<iostream>

using namespace std;

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
} 


int main(){
    int n=10;
    for(int i=0 ; i<n ; i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    int a=0 , b=1;
    while(n!=0){
    cout<<a<<" ";
    int next = a+b;
    a=b;
    b=next;
    n--;
    }

    return 0;
}