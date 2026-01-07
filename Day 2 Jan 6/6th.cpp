#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op; 

    cout << "Enter First number : ";
    cin >> a;

    cout << "Enter Second number : ";
    cin >> b;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << a + b;
            break;
        case '-':
            cout << "Result: " << a - b;
            break;
        case '*':
            cout << "Result: " << a * b;
            break;
        case '/':
            if (b != 0)
                cout << "Result: " << a / b;
            else
                cout << "Error: Division by zero";
            break;
        case '%':
            if (b != 0)
                cout << "Result: " << a % b;
            else
                cout << "Error: Division by zero";
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}
