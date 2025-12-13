#include <iostream>
#include <fstream>                     //header file 
#include <string>
using namespace std;

string users[3][2];                        //declaring a 2d array   

void registeruser(int index) {             //created a function 
    cout << "Enter Registration Details for User " << index + 1 << ":\n";                //input details for user 
    cout << "Enter username: ";
    cin >> users[index][0];    // username             

    cout << "Enter password: ";
    cin >> users[index][1];    // password
 
    ofstream outfile("registration.txt", ios::app);                 //using ofsream to write in file and using append to avoid overwriting 
    outfile << users[index][0] << " " << users[index][1] << endl;
    outfile.close();

    cout << "........You are now registered ..........\n"; 
}

void displayregisteredusers() {
    ifstream infile("registration.txt");                     //using ifstream to open an read from the file
    string uname, pass;

    cout << "\nRegistered Details of All Users:\n";

    while (infile >> uname >> pass) {                                 //using loop to dispaly previous information infile
        cout << "Password: " << pass << endl;                               
        cout << "Username: " << uname << endl;
    }
 
    infile.close();                                //closing the file
}

int main() {
    // Clear previous file data
    ofstream clearfile("registration.txt");                     //using ofstream to write in the file
    clearfile.close();       
                                                                                                                    
    for (int i = 0; i < 3; i++) {
        registeruser(i);                                                          // Register 3 users
    }


    displayregisteredusers();                                                                      // Display registered users

    return 0;
}
