#include "Reverse.h"
#include "TruckLoads.h"
#include <iostream>
using namespace std;

int main(){

    Reverse Re;
    Truckloads Tl;

    cout << Re.reverseDigit(12345) << endl;
    cout << Re.reverseString("Hello") << endl;
    cout << Tl.numTrucks(1024,5) << endl;

    return 0;
}