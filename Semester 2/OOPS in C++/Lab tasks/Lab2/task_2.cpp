#include<iostream>.  //header file

using namespace std;

void printBinary(unsigned int n){      //printing the binary fomr
    for(int i=7 ; i>=0 ; i--){
        int bit = (n>>i) & 1;    //right shift by i and then and operation
        cout<<bit;
    }
    cout<<endl;
}

int main(){
    unsigned int num;

    cout<<"----STATUS REGISTER----"<<endl;
    cout<<"Enter an unsigned integer : ";     //user input
    cin>>num;

    cout<<"Original Binary : ";      //printing original binary
    printBinary(num);

    num = num | (1<<2);      //setting 3rd bit to 1
    num = num & ~(1<<4);     //setting 5th bit to 0

    cout<<"Updated decimal : "<<num<<endl;    //printed updated num
    cout<<"Updated Binary : ";     
    printBinary(num);      //printed updated inary

    if((num & 1)==1){       //checking even odd
        cout<<"The final number is odd!"<<endl;
    }
    else{
        cout<<"The final number is even!"<<endl;
    }

    return 0;
}