#include <iostream>
using namespace std;

class BankAccount 
{
 private:
        int Balance;
        
  public:
       void setBalance(int b)
    {
        Balance = b;
    }

    int getBalance()
    {
        return Balance;
    }
};

int main()
{
    BankAccount acc;

    acc.setBalance(500000);
    cout << "Balance: " << acc.getBalance();

    return 0;
}