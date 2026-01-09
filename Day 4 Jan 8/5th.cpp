#include <iostream>
using namespace std;

int main(){
    int i,j,n=5;
    char ch;

    cout << "Enter any character : ";
    cin >> ch;

    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
    return 0;
}