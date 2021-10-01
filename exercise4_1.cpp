#include <iostream>
using namespace std;

int main() {
    double Y;
    short int b;
    int e;

    cout<<"Enter the value of 'e' of allowable range(-2147483648 to 2147483647) : ";
    cin>>e;

    cout<<"Enter the value of 'b of allowable range(-32768 to 32767) : ";
    cin>>b;

    
    Y = 4-6+ e/3*b*21;
    cout<<Y<<endl;
    
    Y = 4-6+e/(3*b*21);
    cout<<Y<<endl;

    Y = (4-6+e)/3*b*21;
    cout<<Y<<endl;
    cout<<"Computed Value: "<<Y<<endl;
}