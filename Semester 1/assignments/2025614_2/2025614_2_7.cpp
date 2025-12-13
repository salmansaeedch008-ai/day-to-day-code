#include <iostream>
using namespace std;
long long calculate_permutation(int n , int r){
    int nPr=1;
    for(int i=0 ; i<r ; i++){
        nPr = nPr * (n-i);
    }
    return nPr;

}

int main(){
    int n,r;
    do{
        cout<<"enter positive n=";
        cin>>n;
        if(n<0){
            cout<<"Error ";
        }
    }while(n<0);

    do{
        cout<<"enter positive r=";
        cin>>r;
        if(r<0){
            cout<<"Error ";
        }
    }while(r<0);

    if(r>n){
        cout<<"r cannot be greater than n";
    }
    else{
        cout<<"permutation = "<<calculate_permutation(n , r)<<endl;
    }
    return 0;
    
}