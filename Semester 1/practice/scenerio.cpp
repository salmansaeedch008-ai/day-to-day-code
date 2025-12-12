#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

const int MAX = 100;   // Maximum number of students

// Arrays to store data
string ary_names[MAX];
string ary_fnames[MAX];
string ary_cities[MAX];
string ary_phone[MAX];

int studentCount = 0;

// Function to read student records from file
void readDataFromFile() {
    ifstream fin("std_rcd.txt");

    if (!fin) {
        cout << "Error: File not found!" << endl;
        return;
    }

    string line;

    studentCount = 0; // Reset count before reading

    while (getline(fin, line)) {
        stringstream ss(line);
        string name, fname, city, phone;

        getline(ss, name, ',');
        getline(ss, fname, ',');
        getline(ss, city, ',');
        getline(ss, phone, ',');

        // Remove leading spaces after comma
        if (fname[0] == ' ') fname.erase(0, 1);
        if (city[0] == ' ') city.erase(0, 1);
        if (phone[0] == ' ') phone.erase(0, 1);

        ary_names[studentCount] = name;
        ary_fnames[studentCount] = fname;
        ary_cities[studentCount] = city;
        ary_phone[studentCount] = phone;

        studentCount++;
    }

    fin.close();
    cout << "Data loaded successfully! Students found: " << studentCount << endl;
}

// Function to display all student data
void displayData() {
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << ary_names[i] << endl;
        cout << "Father Name: " << ary_fnames[i] << endl;
        cout << "City: " << ary_cities[i] << endl;
        cout << "Phone: " << ary_phone[i] << endl;
    }
}

// Function to append new student record to file
void writeDataToFile() {
    ofstream fout("std_rcd.txt", ios::app);

    if (!fout) {
        cout << "Error: Could not open file for writing!" << endl;
        return;
    }

    string name, fname, city, phone;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Father Name: ";
    getline(cin, fname);
    cout << "Enter City: ";
    getline(cin, city);
    cout << "Enter Phone Number: ";
    getline(cin, phone);

    fout <<name << ", " << fname << ", " << city << ", " << phone << endl;

    fout.close();
    cout << "Record added successfully!" << endl;
}

// Main menu
int main() {
    int choice;

    do {
        cout << "\n========= Student Record System =========\n";
        cout << "1. Read Data From File\n";
        cout << "2. Display All Students\n";
        cout << "3. Write New Student To File\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                readDataFromFile();
                break;
            case 2:
                displayData();
                break;
            case 3:
                writeDataToFile();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);
    
	string strAge;
	getline(cin, strAge);
	
	stringstream ss(strAge);
	int age;
	ss >> age;

    return 0;
}

