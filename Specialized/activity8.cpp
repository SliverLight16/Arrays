#include <iostream>
using namespace std;

int main() {
    int userVals[4];
    int i;
    int maxVal;

    i = 0;

    while (i < (sizeof(userVals) / sizeof(int))) {
        cin>> userVals[i];
        
        i = i+1;
    }
        
    maxVal = userVals[0];
    i = 0;

    while (i < (sizeof(userVals) / sizeof(int))) {
        
        if (userVals[i] > maxVal) {
            maxVal = userVals[i];
        }
        
        i = i+1;
    }
   
    cout<< "Max is " << maxVal;
}