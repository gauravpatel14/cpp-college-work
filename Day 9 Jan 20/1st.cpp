#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// --- 1. User defined functions ---

// Non-void function: Returns a value
int add(int a, int b) 
{
    return a + b; 
}

// Void function: Returns nothing
void greet()
{
    cout << "Hello, World!" << endl;
}

// Bool return type function: Returns true/false
bool isEven(int num)
{
    return num % 2 == 0;
}

// --- Parameter Passing Methods ---

// 2. Call by value (Creates a copy)
void callByValue(int x)
{
    x = 100; // This change happens only to the copy
    cout << "Inside callByValue function: " << x << endl;
}

// 3. Call by reference (Uses the original variable)
void callByReference(int &b)
{
    b = 200; // This changes the actual variable in main
    cout << "Inside callByReference function: " << b << endl;
}

// 4. Call by pointer (Uses the address of the variable)
void callByPointer(int *p)
{
    *p = 300; // Dereferences address to change the actual value
    cout << "Inside callByPointer function: " << *p << endl;
}

int main() {
    // --- Testing Return Types ---
    cout << "--- Function Return Types ---" << endl;
    greet();
    cout << "Sum: " << add(5, 7) << endl;
    cout << "Is 4 even? " << (isEven(4) ? "Yes" : "No") << endl;
    cout << endl;

    // --- Testing Parameter Passing ---
    cout << "--- Parameter Passing Mechanics ---" << endl;

    int num = 10;
    cout << "Original Value: " << num << endl << endl;

    // 1. Call by Value
    callByValue(num);
    cout << "Value in main after callByValue: " << num << " (No Change)" << endl << endl;

    // 2. Call by Reference
    callByReference(num);
    cout << "Value in main after callByReference: " << num << " (Changed)" << endl << endl;

    // 3. Call by Pointer
    // Note: We must pass the address of num using '&'
    callByPointer(&num); 
    cout << "Value in main after callByPointer: " << num << " (Changed again)" << endl;

    return 0;
}