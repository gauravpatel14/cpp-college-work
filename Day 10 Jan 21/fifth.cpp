// solution 1
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    int temp = a; 
    a = b;        
    b = temp;     

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

//solution 2
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    
    a =a + b;        
    b = a-b;  
    a=a-b;  

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}