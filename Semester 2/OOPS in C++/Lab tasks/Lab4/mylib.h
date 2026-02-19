
#ifndef MYLIB_H
#define MYLIB_H

// Structure to store student information
struct Student
{
    char name[50];
    int rollNumber;
    int marks;
};

// Function to calculate average marks
double calculateAverage(Student students[], int totalStudents);


// Function to find maximum marks
int findMaximum(Student students[], int totalStudents);

// Function to find minimum marks
int findMinimum(Student students[], int totalStudents);

//showing student database
void show_student_database(Student students[], int totalStudents);


#endif
