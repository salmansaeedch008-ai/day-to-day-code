#include<iostream>
using namespace std;
void borrowBook(int &books , int quantity = 1){
    books = books - quantity;
}

void returnBook(int &books , int quantity = 1){


}
void showBooks(int books){
    cout<<"currently available books:"<<books;
}

int main(){
    int initial , borrowed , returned;
    cout<<"Initial books:";
    cin>>initial;
    while (initial<0){
        cout<<"error please enter a positive integer"<<endl<<"initial books:";
        cin>>initial;
    }

    cout<<"Borrowed books:";
    cin>>borrowed;
    while (borrowed<0){
    cout<<"error please enter a positive integer"<<endl<<"borrowed books:";
    cin>>borrowed;
    }

    cout<<"Returned books";
    cin>>returned;
    while (returned<0){
    cout<<"error please enter a positive integer"<<endl<<"returned books:";
    cin>>returned;
    }


    borrowBook(initial , borrowed);
    returnBook(initial , returned);
    showBooks (initial);

    return 0;
}


