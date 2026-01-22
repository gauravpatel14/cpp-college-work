#include <iostream>
using namespace std;

int main() {
    char x[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> x[i];
    }
    
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}
