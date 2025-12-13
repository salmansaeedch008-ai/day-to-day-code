#include <iostream>
using namespace std;

int getSmallestPrimeFactor(int n){
    for(int i=2 ; i<=n ; i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}

int findHcfByFactors(int a, int b){
    int hcf = 1;
    if(a==0 && b==0){
        return -1;         // using -1 for indicating undefined
    }
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    


    while(a>1 && b>1){
        int factorA = getSmallestPrimeFactor(a);
        int factorB = getSmallestPrimeFactor(b);

        if(factorA == factorB){
            hcf = hcf * factorA;
            a = a / factorA;
            b = b / factorB;
        }
        else if(factorA < factorB){
            a = a / factorA;
        }
        else{
            b = b / factorB;
        }
    }
    return hcf;
}

int main(){
    int num_1 , num_2;
    do{
        cout<<"enter number 1 = ";
        cin>>num_1;
        if(num_1<0){
            cout<<"invalid input , please again ";
        }
    }while(num_1<0);

    do{
        cout<<"enter number 2 = ";
        cin>>num_2;
        if(num_2<0){
            cout<<"invalid input , please again ";
        }
    }while(num_2<0);

    int result = findHcfByFactors(num_1 , num_2);

    if (result==-1){
        cout<<"Hcf of 0 and 0 is undefined"<<endl;
    }
    else{
        cout<<"HCF of "<<num_1<<" and "<<num_2<<" is "<<result<<endl;
    }
    return 0;
}