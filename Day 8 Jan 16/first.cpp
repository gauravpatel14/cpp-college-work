#include <iostream>
#include <string> 
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    void setBrand(string a) {
        brand = a;
    }

    void setYear(int b) {
        year = b;
    }

    string getBrand() {
        return brand;
    }

    int getYear() {
        return year;
    }

    void show() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car vehicle;

    
    vehicle.setBrand("Toyota");
    cout << "Brand : " << vehicle.getBrand() << endl;

    vehicle.setYear(2022);
    cout << "Year : " << vehicle.getYear() << endl;

    return 0;
}
