#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    // Function to create account
    void createAccount() {
        cout << "Enter account holder name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    // Function to deposit money
    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully!\n";
    }

    // Function to withdraw money
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n";
        }
    }

    // Function to display details
    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;

    acc.createAccount();

    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: acc.deposit(); break;
            case 2: acc.withdraw(); break;
            case 3: acc.display(); break;
            case 4: cout << "Thank you!\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}