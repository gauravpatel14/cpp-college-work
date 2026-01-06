#include <iostream>
using namespace std;
// Program determines the greater of two user inputted numbers.
int main(){
    int a, b;

    cout << "Enter First Number :" ;
    cin >> a ;

    cout << "Enter Second Number :" ;
    cin >> b ;

    int max =(a > b) ? a : b; 
    cout << "Greater number :" << max;
}