#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    int opt;
    char a;

    do {
        cout<<"Please enter two numbers"<<endl;
        cin>>n1;
        cin>>n2;

        cout<<"Please make a selection: "<<endl;
        cout<<"1) Addition"<<endl;
        cout<<"2) Subtraction"<<endl;
        cout<<"3) Multiplication"<<endl;
        cout<<"4) Division"<<endl;

        cin>>opt;
        switch (opt) {
        case 1:
            cout<<"Addition:"<<n1+n2<<endl;
            break;
        case 2:
            cout<<"Subtraction:"<<n1-n2<<endl;
        case 3:
            cout<<"Multiplication:"<<n1*n2<<endl;
        case 4:
            cout<<"Division:"<<n1/n2;
        default:   
            cout<<"wrong Input"; 
        }
        
        if(n1 > n2) {
            cout<<n1<<" is greater"<<endl;
            cout<<n2<<" is smalller"<<endl;
        }else {
            cout<<n2<<" is greater"<<endl;
            cout<<n1<<" is smaller"<<endl;
        }
    cout<<"press any key to continue, e to exit"<<endl;
    cin>>a;
    }while(a != 'e');

    return 0;
}