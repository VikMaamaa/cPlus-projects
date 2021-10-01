#include <iostream>
using namespace std;
 int main() {
     int n, fac, i;
     fac =1;

    cout<<"Enter n: ";
    cin>>n;
    cout<<"Integer \t Factorial"<<endl;
     for(i=1; i<=n; i++) {
        fac *=i ;
        cout<<i<<" \t\t "<<fac<<endl;
     }

    return 0; 
 }