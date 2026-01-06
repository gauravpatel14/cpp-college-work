#include <iostream>
using namespace std;
//This Program use sizeof() operator to display memory size of Data Types.
int main(){
    int a;
    float b;
    double c;
    char d;
    bool e;
    long int f;

    cout <<"Size of int :" << sizeof(a)<<"bytes"<< endl;
    cout <<"Size of float :" << sizeof(b)<<"bytes"<< endl;
    cout <<"Size of double :" << sizeof(c)<<"bytes"<< endl;
    cout <<"Size of char :" << sizeof(d)<<"bytes"<< endl;
    cout <<"Size of bool :" << sizeof(e)<<"bytes"<< endl;
    cout <<"Size of long int :" << sizeof(f)<<"bytes"<< endl;

}