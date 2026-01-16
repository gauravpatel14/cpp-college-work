#include <iostream>
using namespace std;
class Employee{
    private:
    int id;
    float salary;

    public:
       void setId(int b)
    {
        id = b;
    }

    int getId()
    {
        return id;
    }

       void setSalary(float a)
    {
        salary = a;
    }

    int getSalary()
    {
        return salary;
    }


void show(){
    cout << "ID: " << id << endl;
    cout << "Salary: " << salary << endl;
}
};

int main(){
    Employee e1,e2;
    e1.setId(101);
    e1.setSalary(30000);
    e2.setId(102);
    e2.setSalary(40000);
    e1.show();
    e2.show();
    return 0;
}