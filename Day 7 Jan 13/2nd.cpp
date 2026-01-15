#include <iostream>
using namespace std;

class Books
{
    public:
        int price;
        string name;
        string author;

        void display(){
            cout<< " Price : "<<price<<endl;
            cout<< " Book Name : "<<name<<endl;
            cout<< " Author : "<<author;
        }
};
int main(){
    Books b1;
    b1.price=200;
    b1.name="Zero to One";
    b1.author="By Peter Thiel";
    b1.display();

    return 0;
}