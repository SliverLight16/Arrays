#include <iostream>
using namespace std;

int main() {
    int itemCounts[3];

    cin>> itemCounts[0];
    itemCounts[1] = 99;
    itemCounts[2] = itemCounts[0] * 2;

    cout<< itemCounts[2];
}