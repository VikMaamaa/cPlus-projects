#include <iostream>
using namespace std;

int main() {
    int count = 10;
    int sum = 0;
    int i = count;

    //goto label
    fly:
        if(i>=0){
            sum += i--;
            goto fly;
        }
    cout<<sum;
        
    return 0;
}