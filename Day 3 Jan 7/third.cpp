#include <iostream>
using namespace std;

int main(){
    int i ,rev =0;
   cout<<"Enter any number :";
   cin>>i;

   do{
    rev = rev * 10 + (i % 10);
    i /= 10;
   }while(i!=0);
   {
    cout<<"Reverse = " << rev;
    return 0;
   }
}
    