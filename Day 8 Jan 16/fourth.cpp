#include <iostream>
#include <limits>
using namespace std;

class Bank {
private:
    int balance = 5000;

public:
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    void deposit(int amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposited: " << amt << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(int amt) {
        if (amt > 0 && amt <= balance) {
            balance -= amt;
            cout << "Withdrew: " << amt << endl;
        } else if (amt > balance) {
            cout << "Insufficient funds to withdraw " << amt << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }
};

int main() {
    Bank b;

    b.displayBalance();
    
    b.deposit(2000); 
    b.displayBalance();

    b.withdraw(2000);
    b.displayBalance();

    return 0;
}
