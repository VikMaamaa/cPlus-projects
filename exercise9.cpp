#include <iostream>
using namespace std;
 int main() {
     char opt;
     int i, j;
     cout<<"Do you want to draw the pattern or quit?"<<endl;
     cout<<"Y (or y) - yes"<<endl;
     cout<<"Q (or q) - Quit"<<endl;
     cin>>opt;
    
    if(opt == 'y' || 'Y') {
        for(i = 1; i < 9; ++i) {
            for(j=0; j<9; ++j) {
                if(i%2 ==0) {
                    cout<<" "<<"*";
                }else{
                    cout<<"*"<<" ";
                }
            }
            cout<<endl;
        }
    }else if (opt == 'q' || 'Q') {
        return 0;
    }else {
        cout<<"Input not recognized. Program will now exit";
    }
 }