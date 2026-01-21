#include <iostream>
using namespace std;


int reverseNumber(int n) {
    int rev = 0;
    int rem;

    while (n > 0) {
        rem = n % 10;      
        rev = rev * 10 + rem; 
        n = n / 10;       
    }
    return rev;
}

int main() {
    int a;
    cout << "Enter number: ";
    cin >> a;

    int reversed_a = reverseNumber(a);
    
    cout << "Original Number: " << a << endl;
    cout << "Reversed Number: " << reversed_a << endl;

    return 0;
}