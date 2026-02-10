#include <iostream>
using namespace std;

int main() {
    int capacity = 5;
    int count = 0;
    int* students = new int[capacity];

    int choice;

    do {
        cout << "\n===== Student Registration Menu =====\n";
        cout << "1. Register Students\n";
        cout << "2. Display Student IDs\n";
        cout << "3. Search Student ID\n";
        cout << "4. Remove Student ID\n";
        cout << "5. Show Capacity & Count\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int n;
            cout << "Enter number of students to register: ";
            cin >> n;

            for (int i = 0; i < n; i++) {
                if (count == capacity) {
                    int newCapacity = capacity * 2;
                    int* temp = new int[newCapacity];

                    for (int j = 0; j < count; j++) {
                        temp[j] = students[j];
                    }

                    delete[] students;
                    students = temp;
                    capacity = newCapacity;
                }

                cout << "Enter Student ID: ";
                cin >> students[count];
                count++;
            }
        }

        else if (choice == 2) {
            if (count == 0) {
                cout << "No students registered.\n";
            } else {
                cout << "Student IDs: ";
                for (int i = 0; i < count; i++) {
                    cout << students[i] << " ";
                }
                cout << endl;
            }
        }

        else if (choice == 3) {
            int searchID;
            cout << "Enter Student ID to search: ";
            cin >> searchID;

            bool found = false;
            for (int i = 0; i < count; i++) {
                if (students[i] == searchID) {
                    found = true;
                    break;
                }
            }

            if (found)
                cout << "Student ID found.\n";
            else
                cout << "Student ID not found.\n";
        }

        else if (choice == 4) {
            int removeID;
            cout << "Enter Student ID to remove: ";
            cin >> removeID;

            int index = -1;
            for (int i = 0; i < count; i++) {
                if (students[i] == removeID) {
                    index = i;
                    break;
                }
            }

            if (index != -1) {
                for (int i = index; i < count - 1; i++) {
                    students[i] = students[i + 1];
                }
                count--;
                cout << "Student ID removed successfully.\n";
            } else {
                cout << "Student ID not found.\n";
            }
        }

        else if (choice == 5) {
            cout << "Final capacity: " << capacity << endl;
            cout << "Total registered students: " << count << endl;
        }

        else if (choice == 0) {
            cout << "Exiting system...\n";
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    delete[] students;
    students = nullptr;

    cout << "\n2025614 - Salman Saeed\n";
    return 0;
}
