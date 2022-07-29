#include <iostream>
using namespace std;

int main() {
    int userVals[5];
    int i;

    i = 0;

    while (i < (sizeof(userVals) / sizeof(int))) {
        cin>> userVals[i];
        
        i = i+1;
    }
        
    i = 0;

    while (i < (sizeof(userVals) / sizeof(int))) {
        cout<< userVals[i] << " ";
        
        i = i+1;
    }
   

}