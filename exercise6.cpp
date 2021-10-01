#include <iostream>
using namespace std;

int main() {
    int user_defined_limit, sum, prod, opt, i, c;
    c = 0;
    do {
        sum=0;
        prod =1;
        cout<<"Enter Upper Limit ";
        cin>>user_defined_limit;
        for(i=2; i <= user_defined_limit; i +=2){
            sum +=i;
        }
        for(i=1; i<=user_defined_limit; i +=2){
            prod *= i;
        }

        cout<<"Sum of even numbers = "<<sum<<endl;
        cout<<"Product of odd numbers = "<<prod<<endl;

        cout<<"Enter 1 to continue, any other character to terminate: ";
        cin>>opt;
        c +=1;
    }while(opt ==1);
    cout<<"You have run the program for "<< c <<" times";

    return 0;
}