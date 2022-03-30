#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>
using namespace std;

int main(){

    Reverse Re;
    Truckloads Tl;
    EfficientTruckloads Ef;

    //cout << Re.reverseDigit(12) << endl;
    //cout << Re.reverseString("HELLO") << endl;
    cout << Tl.numTrucks(1000,5) << endl;
    cout << Ef.numTrucks(1000,5) << endl;

    return 0;
}