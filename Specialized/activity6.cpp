#include <iostream>
using namespace std;

int main() {
    int userVals[5];
    int i;

    i = 0;

    while (i < (sizeof(userVals) / sizeof(int))) {
        userVals[i] = -1;
        
        cout<< userVals[i]<<endl;
        i = i+1;
    }
        
}