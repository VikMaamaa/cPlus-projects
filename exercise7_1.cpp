#include <iostream>
using namespace std;

int main() {
    int count = 10;
    int sum = 0;
    
    for (int i = count; i >= 0; sum +=i--);
    cout << sum;

    return 0;
}