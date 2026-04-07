#include <iostream>
using namespace std;

class Transaction; // Forward declaration

class Account {
private:
    int accountNumber;
    int balance;

public:
    Account(int accNo, int bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    // Friend function declaration
    friend void updateBalance(Account &acc, Transaction &trans);
};

class Transaction {
private:
    int depositAmount;

public:
    Transaction(int amt) {
        depositAmount = amt;
    }

    // Friend function declaration
    friend void updateBalance(Account &acc, Transaction &trans);
};

// Friend function definition
void updateBalance(Account &acc, Transaction &trans) {
    acc.balance += trans.depositAmount;
}

int main() {
    Account acc(101, 5000);   //create objects
    Transaction trans(1500);  //making transaction

    cout << "Before Transaction:\n";
    acc.displayBalance();   //displaying balance

    updateBalance(acc, trans);

    cout << "\nAfter Transaction:\n";
    acc.displayBalance();

    return 0;
}