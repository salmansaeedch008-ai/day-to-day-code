#include <iostream>
#include <iomanip>
#include "mylib.cpp"

using namespace std;

int main()
{
    // Initial dynamic array size
    int currentCapacity = INITIAL_SIZE;
    int studentCount = 0;

    // Dynamically allocating memory
    Student* studentDatabase = new Student[currentCapacity];

    cout << "Student Management System Started...\n" << endl;

    while (true)
    {
        cout << "Enter data of student " << studentCount + 1 << " (-1 in marks to stop)\n" << endl;

        cout << "Enter Student Name: ";
        cin >> studentDatabase[studentCount].name;

        cout << "Enter Roll Number: ";
        cin >> studentDatabase[studentCount].rollNumber;

        cout << "Enter Marks: ";
        cin >> studentDatabase[studentCount].marks;

        // Exit condition
        if (studentDatabase[studentCount].marks == -1)
        {
            break;
        }

        // Reject negative marks
        if (studentDatabase[studentCount].marks < 0)
        {
            cout << "Invalid marks! Please enter positive marks.\n" << endl;
            continue;
        }
        cout<<endl;

        studentCount++;

        // Resize array if full
        if (studentCount == currentCapacity)
        {
            int newCapacity = DOUBLE_SIZE(currentCapacity);

            Student* resizedDatabase = new Student[newCapacity];

            // Copy old data into new array
            for (int i = 0; i < currentCapacity; i++)
            {
                resizedDatabase[i] = studentDatabase[i];
            }

            delete[] studentDatabase;  // Free old memory

            studentDatabase = resizedDatabase;
            currentCapacity = newCapacity;

            cout << "\nDatabase capacity doubled to "<< currentCapacity << " students.\n" << endl;
        }
    }

    // If no students entered
    if (studentCount == 0)
    {
        cout << "\nNo student records were entered." << endl;
        delete[] studentDatabase;
        return 0;
    }

    // Displaying student database
    cout << "\nStudent Database:\n" << endl;

    show_student_database(studentDatabase , studentCount);
    cout<<endl;

    // Calculations
    int highestMarks = findMaximum(studentDatabase, studentCount);
    int lowestMarks = findMinimum(studentDatabase, studentCount);
    double averageMarks = calculateAverage(studentDatabase, studentCount);

    cout << "\nHighest Marks: " << highestMarks << endl;
    cout << "Lowest Marks: " << lowestMarks << endl;
    cout << "Average Marks: " << fixed << setprecision(2)<< averageMarks << endl;

    // Free allocated memory
    delete[] studentDatabase;

    cout << "\nProgram finished successfully." << endl;

    return 0;
}
