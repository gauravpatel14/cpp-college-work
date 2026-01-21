#include <iostream>
using namespace std;

double calculateCircleArea(double radius, const double PI) {
    return PI * radius * radius;
}


double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}


double RectangleArea(double length, double breadth) {
    return length * breadth;
}


double SquareArea(double length) {
    return length * length;
}

int main() {
    int choice;
    double area, param1, param2;
    const double PI = 3.14;

    cout << "The Area Calculator" << endl;
    cout << "1. Area of a Circle" << endl;
    cout << "2. Area of a Triangle" << endl;
    cout << "3. Area of a Rectangle" << endl;
    cout << "4. Area of Square" << endl;
    cout << "Enter your choice (1-4): "; 
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the radius: ";
            cin >> param1;
            area = calculateCircleArea(param1, PI);
            cout << "Area of the circle is: " << area << endl;
            break;
        case 2:
            cout << "Enter the base: ";
            cin >> param1;
            cout << "Enter the height: ";
            cin >> param2;
            area = calculateTriangleArea(param1, param2);
            cout << "Area of the triangle is: " << area << endl;
            break;
        case 3:
            cout << "Enter the length: ";
            cin >> param1;
            cout << "Enter the breadth: ";
            cin >> param2;
            
            area = RectangleArea(param1, param2);
            cout << "Area of the rectangle is: " << area << endl;
            break;
        case 4:
            cout << "Enter Length of square : ";
            cin >> param1;
            area = SquareArea(param1);
            cout << "Area of the square is:" << area << endl;
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
            break;
    }

    return 0;
}
