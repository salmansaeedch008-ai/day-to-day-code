#include<iostream>

using namespace std;

struct book{
    char title[40];
    char author[30];
    int year;
};

int main(){
    book b[5];

    for(int i=0 ; i<5 ; i++){
        cout<<"Enter book details for book number "<<i+1<<endl;
        cout<<"Enter title of the book : ";
        cin>>b[i].title;
        cout<<"Enter author of book : ";
        cin>>b[i].author;
        cout<<"Enter publishing year of book : ";
        cin>>b[i].year;
        cout<<endl;
    }

    cout<<"Books having published year greater than 2015 : "<<endl;

    for(int i=0 ; i<5 ; i++){
        if(b[i].year>2015){
            cout<<"Title of book : "<<b[i].title<<endl;
            cout<<"Author of book : "<<b[i].author<<endl;
            cout<<"Publishing year : "<<b[i].year<<endl;
            cout<<endl;
        }
    }


    return 0;
}