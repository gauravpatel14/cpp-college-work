#include <iostream>
using namespace std;

class Student
{
    public:
        int rollNo;
        string name;

        void display(){
            cout<<" Name: "<<name<<endl;
            cout<<" Roll No: "<<rollNo;
            
        }
};

int main(){
    Student s1; 
    s1.rollNo=101;
    s1.name="Ram";
    s1.display();

    return 0;
}