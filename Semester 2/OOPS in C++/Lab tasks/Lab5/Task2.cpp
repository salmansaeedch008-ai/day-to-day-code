#include<iostream>
 
using namespace std;
 
class Calculator{         //creating the class
    private:
 
    double a;                  //private attributes
    double b;
 
    public:
 
    void setvalues(double v1 , double v2);
    void add();
    void sub();                   //public functions prototype
    void mul();
    void div();
 
};
 
void Calculator::setvalues(double v1 , double v2){            //out of line function for setting the data
    a = v1;
    b = v2;
}
 
void Calculator::add(){                   //add function
    cout<<a<<" + "<<b<<" = "<<a+b;
}
 
void Calculator::sub(){
    cout<<a<<" - "<<b<<" = "<<a-b;               //subtract functoin
}
 
void Calculator::mul(){
    cout<<a<<" x "<<b<<" = "<<a*b;           //multiply function
}
 
void Calculator::div(){
    if(b==0){
        cout<<"Error number cannot be divided by zero!!";           //divide function and exception handing that second number must not zero
    }
    else{
    cout<<a<<" / "<<b<<" = "<<a/b;
    }
}
 
int main(){
    int value1;
    int value2;
 
    cout<<"Enter first value : ";
    cin>>value1;                 //input value 1
 
    cout<<"Enter second value : ";
    cin>>value2;                    //input value 2
 
    Calculator c;               //creating object of class  
 
    c.setvalues(value1 , value2);      //setting vlaues by calling functoin
 
    cout<<"Addition : "<<endl;                //calling all the function.
    c.add();
    cout<<endl;
 
    cout<<"Subtraction : "<<endl;
    c.sub();
    cout<<endl;
 
    cout<<"Multiplication : "<<endl;
    c.mul();
    cout<<endl;
 
    cout<<"Division : "<<endl;
    c.div();
    cout<<endl;
 
    return 0;
}
