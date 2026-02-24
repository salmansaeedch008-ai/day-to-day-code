#include<iostream>
 
using namespace std;
 
class Book{       ///class
    private:
 
    string title;
    double price;             //private attributes
 
    public:
 
    void setdata(string t , double p){
        title = t;                //setting the data
        price = p;
    }
 
    void display(){
        cout<<"Book Title : "<<title<<endl;              //using the function to display the data , function is inline
        cout<<"Book price : "<<price;
    }
};
 
int main(){
    string title;
    double price;
 
    cout<<"Enter Title of Book : ";             //user input the title
    cin>>title;
 
    cout<<"Enter price of Book : ";
    do{                          //exception handling of negative price
        cin>>price;
        if(price<0){
            cout<<"Price cant be negative! please enter a positive price : ";
        }
    }while(price<0);
 
    Book b;        //creatig object
 
    b.setdata(title , price);         //calling the function
 
    b.display();          //displaying the information
 
    return 0;
}
