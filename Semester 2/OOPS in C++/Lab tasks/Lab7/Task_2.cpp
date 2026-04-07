#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    int rollNumber;

    // Constructor
    Student(int r, int m) {
        rollNumber = r;
        marks = m;
    }

    // Friend declaration
    friend class Teacher;

    // Function to display marks
    void displayMarks() {
        cout << "Roll Number: " << rollNumber << ", Marks: " << marks << endl;
    }
};

class Teacher {
public:
    // Function to upgrade marks
    void upgradeMarks(Student &s, int extraMarks) {
        cout << "Marks before upgrade: " << s.marks << endl;
        s.marks += extraMarks;  // Direct access due to friend class
        cout << "Marks after upgrade: " << s.marks << endl;
    }
};

int main() {
    Student s1(101, 75);  //create student object
    Teacher t1;   //create friend class object 

    cout << "Initial Student Details:" << endl;
    s1.displayMarks();    //displaying marks

    cout << "\nUpgrading marks...\n";
    t1.upgradeMarks(s1, 10);

    cout << "\nFinal Student Details:" << endl;
    s1.displayMarks();

    return 0;
}