#include<iostream>

using namespace std;

int main(){
    int start, end;
    cout<<"enter starting number of range : ";
    do{
    cin>>start;
    if(start<0){
        cout<<"Invalid input! please again enter starting range : ";
    }
    }while(start<0);
    cout<<"enter ending number of range : ";
    do{
    cin>>end;
    if(end<0 || end<=start){
        cout<<"Invalid input! please again enter starting range : ";
    }
    }while(end<0 || end<=start);

    for(int i=start ; i<end ; i++){
        if(i<2){
            continue;
        }
        bool isprime = true;
        for(int j=2 ; j<=i/2 ; j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout<<i<<" ";
        }
    }


    return 0;
}