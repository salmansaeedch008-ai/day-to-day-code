#ifndef MYLIB_CPP
#define MYLIB_CPP
#include<iostream>
using namespace std;
#include "mylib.h"

// Preprocessor Macros
#define INITIAL_SIZE 3
#define DOUBLE_SIZE(x) ((x) * 2)


// Function to calculate average marks
double calculateAverage(Student students[], int totalStudents)
{
    double sumOfMarks = 0;

    for (int index = 0; index < totalStudents; index++)
    {
        sumOfMarks += students[index].marks;
    }

    return sumOfMarks / totalStudents;
}

// Function to find maximum marks
int findMaximum(Student students[], int totalStudents)
{
    int highestMarks = students[0].marks;

    for (int index = 1; index < totalStudents; index++)
    {
        if (students[index].marks > highestMarks)
        {
            highestMarks = students[index].marks;
        }
    }

    return highestMarks;
}

// Function to find minimum marks
int findMinimum(Student students[], int totalStudents)
{
    int lowestMarks = students[0].marks;

    for (int index = 1; index < totalStudents; index++)
    {
        if (students[index].marks < lowestMarks)
        {
            lowestMarks = students[index].marks;
        }
    }

    return lowestMarks;
}

void show_student_database(Student students[], int totalStudents){
    for (int i = 0; i < totalStudents; i++){
        cout << students[i].name<< " (Roll No. " << students[i].rollNumber << ") "<< "Marks: " << students[i].marks << endl;
    }
}


#endif
