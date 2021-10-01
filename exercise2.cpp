#include <iostream>
using namespace std;

int main() {
    double cb, wd, dp;//cb for balance, wd for withdrawal amount, dp for deposit amount
    int status;

    cout<<"Enter Current Balance: ";
    cin>>cb; //input for balance

    //selection structure
    cout<<"\nEnter 1 for withdrawal,"<<endl;
    cout<<"2 for deposit"<<endl;
    cin>>status;

    switch (status) {
    case 1:
        cout<<"\nEnter amout to withdraw: ";
        cin>>wd;

        //withdrawal operation
        if(wd <= cb) {
            cout<<"New Balance is "<<cb-wd;
            cout<<"\n-----------------------------";
        }else {
            cout<<"Insufficient Balance!";
        }
        break;

    case 2:
        //deposit operation
        cout<<"\nEnter amount to deposit: ";
        cin>>dp;

        cout<<"New Balance is "<<cb+dp;
        cout<<"\n----------------------------";
        break;

    default:  
        cout<<"Wrong Input";  
    }
   
}