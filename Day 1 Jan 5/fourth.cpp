#include <iostream>
using namespace std;
//Checks if you Pass or Fail based on your marks.
int main(){
    int marks;

    cout << "Enter Marks :" ;
    cin >> marks;

    string result = (marks >= 40) ? "Pass"  :  "Fail" ;


    cout << "Result :" << result;
}