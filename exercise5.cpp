#include <iostream>
using namespace std;

int main() {
    double M[10], sum, avg;//variable initializations
    int i = 0;
    cout<<"Welcome"<<endl;
    
    while(i<10) {
        cout<<"Enter Marks: ";
        cin>>M[i];
        sum = sum + M[i];
        ++i;
    }
    avg = sum/10;
    cout<<"Class Average is: "<<avg;


    return 0;
}