#include "EfficientTruckloads.h"


EfficientTruckloads::EfficientTruckloads(){

}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1;
    if (table[numCrates][loadSize] > 0) return table[numCrates][loadSize];

    int output = (numTrucks(numCrates/2, loadSize) + numTrucks((numCrates + 1)/2, loadSize));
    table[numCrates][loadSize] = output;
    return output;
}


