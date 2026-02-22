#include<iostream>

using namespace std;

class Book{
    private:
    string title;
    int price;

    public:
    void settitle(string title);
    void gettitle();
    void setprice(int pri);
    void getprice();
};

void Book::settitle(string tit){
    title = tit;
}

void Book::setprice(int pri){
    price = pri;
}

void Book::gettitle(){
   cout<<"Title of book : "<<title<<endl;
}

void Book::getprice(){
    cout<<"Price of book : "<<price<<endl;
}

int main(){
    Book b1;
    string title;
    int price;
    cout<<"Enter title of book : ";
    cin>>title;
    b1.settitle(title);
    cout<<"Enter price of book : ";
    cin>>price;
    b1.setprice(price);
    cout<<endl;
    b1.gettitle();
    b1.getprice();

    return 0;
}