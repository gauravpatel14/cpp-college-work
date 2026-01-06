#include <iostream>
using namespace std;
//Checks logical operators by OR (||), NOT (!), and AND (&&) conditions.
int main() {
    int a = 10; 
    int b = 20;

    if (a > 15 || b > 15) 
        cout << "At least one is true" << endl;
    else 
        cout << "or is false" << endl;

    if (!(a > b)) 
        cout << "not is true" << endl;

    if (a && b)
        cout << "True" <<endl;
    return 0;
}
