#include "Truckloads.h"
#include <iostream>

Truckloads::Truckloads(){

}

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1;
    return (numTrucks(numCrates/2, loadSize) + numTrucks((numCrates + 1)/2, loadSize));
}


