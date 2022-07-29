#include <iostream>
using namespace std;

int main() {
    int userNums[5] = {11, 77, 22, 55, 33};

    userNums[0] = 33;
    userNums[1] = 55;
    userNums[3] = 77;
    userNums[4] = 11;

    cout<< userNums[0] <<endl<< userNums[1] <<endl<< userNums[2] <<endl<< userNums[3] <<endl<< userNums[4];
}