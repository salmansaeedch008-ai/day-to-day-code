#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // hidden data

public:
    BankAccount() : balance(0) {}

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(250);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
