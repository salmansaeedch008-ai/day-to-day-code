#include "Task4.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor
Record::Record(char* str) {
    // Calculate string length
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    // Allocate memory for the filename
    fileName = new char[length + 1];
    
    // Copy the filename
    for (int i = 0; i <= length; i++) {
        fileName[i] = str[i];
    }
}

// Destructor
Record::~Record() {
    delete[] fileName;
}

// Helper function to manually compare two strings
bool Record::compareStrings(char* str1, char* str2) {
    int i = 0;
    
    // Compare characters until a mismatch or end of string
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    
    // Both strings should end at the same position
    return (str1[i] == '\0' && str2[i] == '\0');
}

// Function to input records
int Record::record_Input() {
    // Open the file for appending
    ofstream file(fileName, ios::app);
    
    if (!file) {
        return -1;  // Error opening file
    }
    
    char name[100], address[100], age[10], cgpa[10];
    
    // Get input from user
    cout << "Enter Name: ";
    cin >> name;
    
    cout << "Enter Address: ";
    cin >> address;
    
    cout << "Enter Age: ";
    cin >> age;
    
    cout << "Enter CGPA: ";
    cin >> cgpa;
    
    // Write to file
    file << name << " " << address << " " << age << " " << cgpa << endl;
    
    file.close();
    return 1;  // Success
}

// Function to display all records
void Record::record_Display() {
    // Open the file for reading
    ifstream file(fileName);
    
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }
    
    char line[200];
    
    cout << "\nAll Records:\n";
    cout << "------------------------------------------\n";
    
    // Read and display each line
    while (file.getline(line, 200)) {
        cout << line << endl;
    }
    
    cout << "------------------------------------------\n";
    
    file.close();
}

// Function to delete a record by name
int Record::delete_Record() {
    // Open the file for reading
    ifstream file(fileName);
    
    if (!file) {
        return -1;  // Error opening file
    }
    
    // Create a temporary file for writing
    ofstream temp("temp.txt");
    
    if (!temp) {
        file.close();
        return -1;  // Error creating temp file
    }
    
    char deleteNameBuffer[100];
    cout << "Enter name to delete: ";
    cin >> deleteNameBuffer;
    
    char name[100], address[100], age[10], cgpa[10];
    bool deleted = false;
    
    // Read each record
    while (file >> name >> address >> age >> cgpa) {
        // If name doesn't match, write to temp file
        if (!compareStrings(name, deleteNameBuffer)) {
            temp << name << " " << address << " " << age << " " << cgpa << endl;
        } else {
            deleted = true;
        }
    }
    
    file.close();
    temp.close();
    
    // Replace original file with temp file
    remove(fileName);
    rename("temp.txt", fileName);
    
    return deleted ? 1 : 0;  // 1 if record was deleted, 0 if not found
}

// Function to count records in the file
int Record::record_Count() {
    // Open the file for reading
    ifstream file(fileName);
    
    if (!file) {
        return -1;  // Error opening file
    }
    
    int count = 0;
    char line[200];
    
    // Count the number of lines (records)
    while (file.getline(line, 200)) {
        count++;
    }
    
    file.close();
    
    cout << "Total records: " << count << endl;
    return count;
}

// Function to search for a record by name
int Record::record_Search() {
    // Open the file for reading
    ifstream file(fileName);
    
    if (!file) {
        return -1;  // Error opening file
    }
    
    char searchNameBuffer[100];
    cout << "Enter name to search: ";
    cin >> searchNameBuffer;
    
    char name[100], address[100], age[10], cgpa[10];
    bool found = false;
    
    // Read each record
    while (file >> name >> address >> age >> cgpa) {
        // If name matches, display the record
        if (compareStrings(name, searchNameBuffer)) {
            cout << "\nRecord Found:\n";
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Age: " << age << endl;
            cout << "CGPA: " << cgpa << endl;
            
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "Record not found." << endl;
    }
    
    file.close();
    
    return found ? 1 : 0;  // 1 if record was found, 0 if not
}

// Function to insert a record after a specific name
int Record::record_Insert() {
    // Open the file for reading
    ifstream file(fileName);
    
    if (!file) {
        return -1;  // Error opening file
    }
    
    // Create a temporary file for writing
    ofstream temp("temp.txt");
    
    if (!temp) {
        file.close();
        return -1;  // Error creating temp file
    }
    
    char insertAfterBuffer[100];
    cout << "Enter name after which to insert: ";
    cin >> insertAfterBuffer;
    
    char newName[100], newAddress[100], newAge[10], newCgpa[10];
    char name[100], address[100], age[10], cgpa[10];
    bool inserted = false;
    
    // Read each record
    while (file >> name >> address >> age >> cgpa) {
        // Write the current record
        temp << name << " " << address << " " << age << " " << cgpa << endl;
        
        // If name matches, insert the new record after it
        if (compareStrings(name, insertAfterBuffer)) {
            cout << "Enter new name: ";
            cin >> newName;
            
            cout << "Enter new address: ";
            cin >> newAddress;
            
            cout << "Enter new age: ";
            cin >> newAge;
            
            cout << "Enter new CGPA: ";
            cin >> newCgpa;
            
            temp << newName << " " << newAddress << " " << newAge << " " << newCgpa << endl;
            
            inserted = true;
        }
    }
    
    file.close();
    temp.close();
    
    // Replace original file with temp file
    remove(fileName);
    rename("temp.txt", fileName);
    
    if (!inserted) {
        cout << "Name not found. Record not inserted." << endl;
    }
    
    return inserted ? 1 : 0;  // 1 if record was inserted, 0 if not
}

// Function to replace a record by name
void Record::record_Replace() {
    // Open the file for reading
    ifstream file(fileName);
    
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }
    
    // Create a temporary file for writing
    ofstream temp("temp.txt");
    
    if (!temp) {
        file.close();
        cout << "Error creating temporary file." << endl;
        return;
    }
    
    char replaceNameBuffer[100];
    cout << "Enter name to replace: ";
    cin >> replaceNameBuffer;
    
    char name[100], address[100], age[10], cgpa[10];
    bool replaced = false;
    
    // Read each record
    while (file >> name >> address >> age >> cgpa) {
        // If name matches, replace the record
        if (compareStrings(name, replaceNameBuffer)) {
            cout << "Enter new address: ";
            cin >> address;
            
            cout << "Enter new age: ";
            cin >> age;
            
            cout << "Enter new CGPA: ";
            cin >> cgpa;
            
            replaced = true;
        }
        
        // Write the record (original or modified)
        temp << name << " " << address << " " << age << " " << cgpa << endl;
    }
    
    file.close();
    temp.close();
    
    // Replace original file with temp file
    remove(fileName);
    rename("temp.txt", fileName);
    
    if (!replaced) {
        cout << "Record not found." << endl;
    }
}