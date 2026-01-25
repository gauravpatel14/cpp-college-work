//level inheritance
#include <iostream>
using namespace std;


class student{
    public:
        int roll;
};

class Marks :public student{
public:
    int m1=2;
    int m2=2;
};


class result:public Marks{
    public:
        void display(){
            int Total=m1+m2;
            int Average =(m1+m2)/2;
            int percentage=(m1+m2)/0.2;
            cout<<"enter roll.no : ";
            cin>>roll;
            cout<<"Total Marks : "<<Total<<endl;
            cout<<"Average Marks ="<<Average<<endl;
            cout<<"Percentage ="<<percentage<<endl;
}
};

int main(){
    result r;
    r.display();
    return 0;
}