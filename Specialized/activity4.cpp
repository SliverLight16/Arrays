#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int tempV;

    cin>> x >> y;

    //Swap 
    tempV = x;

    x = y;
    y = tempV;

    cout<< x << " " << y << "\n";

}