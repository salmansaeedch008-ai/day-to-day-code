#include <iostream>
using namespace std;



void menu(){
    cout<<endl;
    cout<<"==Number Generator=="<<endl;

    cout<<"1:Fibonacci Sequence"<<endl;
    cout<<"2:Factorial"<<endl;
    cout<<"3:Exit"<<endl;
    
}
int factorial (int n){
    int fact = 1;
    for(int i =1 ; i<=n ; i++){
        fact = fact * i;
        }
        cout<<"factorial="<<fact<<endl;
    
}
void fibonacci(int n){
    int a=0 , b=1;
    for(int i=1 ; i<=n ; i++ ){
        cout<<a<<" ";
        int next = a + b;
        a = b;
        b = next;
    }
    }



int main(){

    while(true){

    menu();

    int choice , n;
    cout<<"enter choice=";
    cin>>choice;

    cout<<"enter a number=";
    cin>>n;
    if(n<0){
        cout<<"invalid number , please enter a positive number";
    }
        
        else{
    

    if(choice == 1){
        fibonacci(n);
        cout<<endl;
    }

    else if(choice == 2){
        factorial(n);
        cout<<endl;
    }

    else if (choice == 3){
        cout<<"==good bye==";
        break;
    }

    else{
        cout<<"invalid input , please select from following choices";
        continue;
    }
    }
    }
    return 0;

}
    
