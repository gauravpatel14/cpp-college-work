#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 ="Hi";
    string s2 ="Bro";
    string s3;

    s3 =s1 + " " +s2;
    cout<<"Concated string :" << s3 <<endl;

    s1 += s2;
    cout <<"Apeend using += :"<<s1<<endl;
   
    if(s1 == s2){
        cout << "strings are equal"<< endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    if(s1 < s2){
        cout <<s1 << " comes before "<< s2 <<endl;
    } else {
        cout << s1 <<" comes after " << s2 << endl;
    }

    cout << "First Character of s2 :" << s2[0] <<endl;

    return 0;
}

