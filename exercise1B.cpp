#include <iostream>
using namespace std;

int main() {
    int i;
    int opt;
    double F[5], C[5];

    cout<<"Enter 1 to convert Celsius to Fahrenheit"<<endl;
    cout<<"Enter 2 to convert Fahrenheit to Celsius"<<endl;
    cin>>opt;

    if (opt == 1){
        cout<<"Enter the Celsuis Temperatures: "<<endl;
        for (i = 0; i <5; i++){
            cout<<i+1<<" Celsuis Temperature: ";
            cin>>C[i];
        }

        cout<<"Conversions:"<<endl;
        cout<<"Celsius \tFahrenheit"<<endl;

        for (i = 0; i< 5; i++) {
            F[i] = (1.8 * C[i]) + 32;
            cout<<C[i]<<"\t\t"<<F[i]<<"\n"<<endl;
        }
        cout<<"-----------------------------------------";
    }else if(opt == 2) {
        cout<<"Enter the Fahrenheit Temperatures: "<<endl;
        for (i = 0; i < 5; ++i) {
            cout<<i+1<<" Fahrenheit Temperature: ";
            cin>>F[i];
        }

        cout<<"Conversions:"<<endl;
        cout<<"Fahrenheit \tCelsius "<<endl;

        for(i =0; i<5; ++i) {
            C[i] = (F[i] - 32)/1.8;
            cout<<F[i]<<"\t\t"<<C[i]<<"\n"<<endl;
        }
        cout<<"-----------------------------------------";
    }else {
        cout<<"Wrong Input";
    }

    return 0;
}