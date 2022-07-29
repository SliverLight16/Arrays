#include <iostream>
using namespace std;

int main() {
    int userVals[5];
    int i;
    int sumVal;

    i = 0;

    while (i < (sizeof(userVals) / sizeof(int))) {
        cin>> userVals[i];
        
        i = i+1;
    }
        
    sumVal = 0;
    i = 0;

    while (i < (sizeof(userVals) / sizeof(int))) {
        sumVal = sumVal + userVals[i];
        
        i = i+1;
    }
    
    cout<< "Sum is " << sumVal;
}