#include <iostream>
using namespace std;
//Checks if both age and marks rules are met.
int main(){
    int age, marks;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your marks: ";
    cin >> marks;

    if (age >= 18 && marks >= 40) {
        cout << "Result using AND (&&): Eligible and Passed" << endl;
    } else {
        cout << "Result using AND (&&): Not eligible or Failed" << endl;
    }
}
