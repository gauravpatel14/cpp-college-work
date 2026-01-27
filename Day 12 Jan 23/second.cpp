#include <iostream>
using namespace std;

class sports {
public:
    int score = 80;
    char name[50];
    int age;
};

class Academics : public sports {
public:
    int marks = 90;
};

class result : public Academics {
public:
    void Total() {
        cout << "Enter Name: ";
        cin >> name;
                 
        cout << "Enter age: ";
        cin >> age;

        if (age >= 18) {
            cout << "Name: " << name << endl;
            cout << "Total Marks = " << score + marks << endl;
        } else {
            cout << "Not eligible" << endl;
        }
    }
};

int main() {
    result r;
    r.Total();
    return 0;
}
