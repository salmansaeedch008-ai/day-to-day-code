#include<iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int width;

    public:
    void setlenght(int l){
        length = l;
    }
    void setwidth(int w){
        width = w;
    }

    int getarea()const{
        return length * width;
    }
};

int main(){
    Rectangle r1;
    int length , width;
    cout<<"Enter length of rectangle : ";
    cin>>length;
    r1.setlenght(length);
    cout<<"Enter width of rectangle : ";
    cin>>width;
    r1.setwidth(width);
    cout<<endl;

    cout<<endl;

    cout<<"Area of rectangle : "<<r1.getarea()<<endl;
}