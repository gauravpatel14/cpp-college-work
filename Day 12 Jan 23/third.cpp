//derived
#include <iostream>
using namespace std;

//base class

class shape{
public:
void draw(){
    cout<<"Drawing Shape"<<endl;
}
};

class calcuateshape: public shape{
    public:
        double Area,length,breadth;
        int choice;
        const double PI = 3.14;
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
        void area(){
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
            cin >> length;
            Area = calculateCircleArea(length, PI);
            cout << "Area of the circle is: " << Area << endl;
            break;
        case 2:
            cout << "Enter the base: ";
            cin >> length;
            cout << "Enter the height: ";
            cin >> breadth;
            Area = calculateTriangleArea(length, breadth);
            cout << "Area of the triangle is: " << Area << endl;
            break;
        case 3:
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the breadth: ";
            cin >>breadth;
            
            Area = RectangleArea(length, breadth);
            cout << "Area of the rectangle is: " << Area << endl;
            break;
        case 4:
            cout << "Enter Length of square : ";
            cin >> length;
            Area = SquareArea(length);
            cout << "Area of the square is:" << Area << endl;
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
            break;
    }

        }
};

int main(){
    calcuateshape r;
    r.area();
    return 0;
}