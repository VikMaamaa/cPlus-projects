#include <iostream>
using namespace std;


int c;
double calculateSum();
void calculateAverage(double &sum);

int main() {
    int i;
    double sum;

    sum = calculateSum();
     cout<<"Sum is "<<sum<<endl;
    calculateAverage(sum);

   
    cout<<"Average is "<<sum<<endl;

    return 0;
}

double calculateSum() {
    double inpt;
    double sum;
    cout<<"Enter the scores"<<endl;
    cout<<"Enter -1 to stop"<<endl;
    while(1) {
        cin>>inpt;
        if(inpt == -1) {
            return sum;
        }else {
            c = c + 1;
            sum = sum + inpt;
        }
        
    }
}

void calculateAverage(double &sum) {
    sum = sum/c;
}