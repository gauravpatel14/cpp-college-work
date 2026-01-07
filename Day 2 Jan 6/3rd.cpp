#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter Marks :";
    cin >> marks;

    if (marks >= 90){
        cout << "Grade A";
    }else if(marks >= 75 && marks < 90){
        cout << "Grade B";
    }else if(marks >= 50 && marks < 75){
        cout << "Grade C";
    }else{
        cout << "Fail";
    }

    return 0;
}
