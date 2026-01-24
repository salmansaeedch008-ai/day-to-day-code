#include <iostream>
using namespace std;

// Enum for Department
enum Department { AI, CS, SE, DS };

// Structure for Student
struct Student {
    string name;
    int roll;
    Department dept;  // enum type
};

int main() {
    Student students[3];  // Array to store 3 students
    int deptNum;

    // Input data for 3 students
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for student " << i + 1 << endl;

        cout << "Name: ";
        cin >> students[i].name;

        cout << "Roll Number: ";
        cin >> students[i].roll;

        cout << "Department (0: AI, 1: CS, 2: SE, 3: DS): ";
        cin >> deptNum;

        // Convert integer to enum
        students[i].dept = (Department)deptNum;

        cout << endl;
    }

    // Display student details
    cout << "Student Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Roll: " << students[i].roll << endl;

        // Display department name
        if (students[i].dept == AI) cout << "Department: AI" << endl;
        else if (students[i].dept == CS) cout << "Department: CS" << endl;
        else if (students[i].dept == SE) cout << "Department: SE" << endl;
        else if (students[i].dept == DS) cout << "Department: DS" << endl;

        cout << "-------------------" << endl;
    }

    return 0;
}
