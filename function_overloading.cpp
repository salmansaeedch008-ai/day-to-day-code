#include <iostream>
using namespace std;


double area(double r);                     
double area(double l, double w);           
double area(double b, double h, float n);

int main() {
    int choice;
    cout << "Choose a shape to find area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of circle = " << area(r) << endl;
    }
    else if (choice == 2) {
        double l, w;
        cout << "Enter length and width: ";
        cin >> l >> w;
        cout << "Area of rectangle = " << area(l, w) << endl;
    }
    else if (choice == 3) {
        float n = 1/2.0;
        double b, h;
        cout << "Enter base and height: ";
        cin >> b >> h;
        cout << "Area of triangle = " << area(b, h, n) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}



double area(double r) {     
    const double pi = 3.14159;
    return pi * r * r;
}

double area(double l, double w) { 
    return l * w;
}

double area(double b, double h,  float n) {
    n = 1/2.0;
    return n * b * h;
}
