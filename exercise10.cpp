#include <iostream>
using namespace std;
int count = 0;
void messg();

int main() {
    int i;

    for(i = 1; i<=10; ++i){
        messg();
    }
    return 0;
}

void messg() {
    count+=1;
    cout<<"The function has been callled "<<count<<" times"<<endl;
}