#include <iostream>
using namespace std;

class Account {
public:
    char name[100]; 
    int accNo;
    float balance;

    void inputAccount() {
        cout << "Enter account holder name: "<<"  ";
        
        cin.ignore(); 
        cin.getline(name, 100); 

        cout << "Enter account number: "<<"  ";
        cin >> accNo;

        cout << "Enter balance: "<<"  ";
        cin >> balance;
    }
};

class SavingsAccount : public Account {
public:
    float interestRate;

    void inputSavings() {
        cout << "Enter interest rate (%): "<<" ";
        cin >> interestRate;
    }

    void show() {
        cout << "Savings Account" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Amount: " << (balance * interestRate / 100) << endl;
    }
};

class CurrentAccount : public Account {
public:
    float overdraftLimit;

    void inputCurrent() {
        cout << "Enter overdraft limit: "<<"  ";
        cin >> overdraftLimit;
    }

    void show() {
        cout << "Current Account" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount sa;
    CurrentAccount ca;

    cout << "Enter Savings Account Details"<<endl;
    sa.inputAccount();
    sa.inputSavings();
    sa.show();

    cout << "Enter Current Account Details"<<endl;
    ca.inputAccount();
    ca.inputCurrent();
    ca.show();

    return 0;
}

