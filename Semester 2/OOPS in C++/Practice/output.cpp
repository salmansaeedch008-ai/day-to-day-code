#include<iostream>

using namespace std;

struct mystruct{
    int a;
    mystruct *ptr;
};

int main(){

    mystruct s1 , s2;
    mystruct *stptr = new mystruct;
    s1.ptr = &s2;
    s1.a = 1;
    s2.ptr = stptr;
    s2.a = s1.a++;
    stptr->ptr = 0;
    stptr->a = s2.a++;

    stptr = &s1;

    cout<<stptr->a<<" "<<stptr->ptr->a<<" "<<stptr->ptr->ptr->a;
    return 0;
}