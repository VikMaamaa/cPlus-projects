#include <iostream>
using namespace std;

int main() {
    double F, C; //variables to store Fahrenheit or Celsius values
    int conVT; //variable to store decision input

    cout<<"Type 1 to convert Celsius to Fahrenheit \nType 2 to convert Fahrenheit to Celsius"<<endl;
    
   
    cin>>conVT;
    switch (conVT) {
    case 1:
        cout<<"Enter Celsius Temperature: ";
        cin>>C; //take celsius input

        F = (1.8*C + 32);

        //output result
        cout<<"The Fahrenheit Value of "<<C<<" is "<<F<<endl;
        cout<<"-----------------------------------------";
        break;
    case 2:   
        cout<<"Enter Fahrenheit Temperature: ";
        cin>>F;//take fahrenheit input

        C = ((F-32)/1.8);

        //output result
        cout<<"The Celsius Value of "<<F<<" is "<<C<<endl;
        cout<<"----------------------------------------";
        break;
    default:   
        cout<<"You made a wrong choice!";  
    }
   

    return 0;
}