#include<iostream>

using namespace std;

int maxOfThree(int a , int b , int c);

int main(){
    int a , b , c;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    cout<<"enter third number : ";
    cin>>c;
    int greatest = maxOfThree(a , b , c);

    cout<<"maximum of three numbers : "<<greatest<<endl;


    return 0;
}

int maxOfThree(int a , int b , int c){
    int greater;
    if(a>b || a>c){
        greater = a;
    }
    else if(b>a || b>c){
        greater = b;
    }
    else{
        greater = c;
    }
    return greater;
}