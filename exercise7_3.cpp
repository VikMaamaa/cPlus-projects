#include <iostream>
using namespace std;

int main() {
    int count = 10;
    int  sum = 0;
    int i = count;

    while(i>=0) {
        sum += i--;
    }

    cout<<sum;
}