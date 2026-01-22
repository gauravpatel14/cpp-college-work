#include <iostream>
using namespace std;

class employee{
    public:
    int empId;
    void showId()
    {
        cout<<"Employee ID:"<<empId<<endl;
    }
};

class salary:
public employee
{
    public:
    int salary;
    void showSalary()
    {
        cout<<"Salary : "<<salary<<endl;

    }
};

int main(){
    salary s;
    s.empId=32;
    s.salary=323291;

    s.showId();
    s.showSalary();
}