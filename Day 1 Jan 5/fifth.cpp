#include <iostream>
using namespace std;
//Checks if a number is Even or Odd.
int main(){
    int check;

    cout << "Enter number to check whether it is even or odd :" ;
    cin >> check;

    (check % 2 == 0) ? cout << "Even number" : cout << "Odd number";


    cout << "========>>>>" <<endl ;
}