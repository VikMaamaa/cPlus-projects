#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout<<"Welcome"<<endl;
    cout<<"Enter Number 1: ";
    cin>>n1;
    cout<<"Enter Number 2: ";
    cin>>n2;

    if(n1 > n2) {
        cout<<"Number 1 is greater than Number 2"<<endl;
    }else if(n2 > n1) {
        cout<<"Number 2 is greater than Number 1"<<endl;
    }

    if ((n1 % 2) == 0) {
        cout<<"Number 1 is Even"<<endl;
    }else {
        cout<<"Number 1 is Odd"<<endl;
    }

    if((n2 % 2) == 0) {
        cout<<"Number 2 is Even"<<endl;
    }else {
        cout<<"Number 2 is Odd"<<endl;
    }

    return 0;
}