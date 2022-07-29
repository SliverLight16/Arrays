#include <iostream>
using namespace std;

int main() {
    int oldestPpl[5] = {122, 119, 117, 117, 116};
    int nthPerson;
    int personAge;

    cin>> nthPerson;

    if ((nthPerson >= 1) and (nthPerson <= 5)) {
        personAge = oldestPpl[nthPerson -1];
        
        cout<< nthPerson << "th oldest person died at age " << personAge;
    }

}