#include <iostream>

using namespace std;

class rectangle{
    private:
    double width;
    double length;
    
    public:
    void setLength(double len){
        length = len;
    } 
    void setWidth(double wid){
        width = wid;
    }

    double getLength(){
        return length;
    }
    double getWidth(){
        return width;
    }

    double getArea(){
        return length * width;
    }
};

int main(){
    rectangle r1;

    double length = 5.6;
    double width = 6.7;

    r1.setLength(length);
    r1.setWidth(width);

    cout<<"Length of rectangle : "<<r1.getLength()<<endl;

    cout<<"Width of rectangle : "<<r1.getWidth()<<endl;

    cout<<"Area of rectangle : "<<r1.getArea()<<endl;




    return 0;
}