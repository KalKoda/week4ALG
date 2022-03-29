#include "Reverse.h"
#include <math.h>


Reverse::Reverse(){

}

int Reverse::reverseDigit(int value){

    int digit = (int) log10(value);

    // Base condition
    if(value <= 0)
        return -1;

    return ((value%10 * pow(10, digit)) + reverseDigit(value/10));

}

std::string Reverse::reverseString(std::string letters){

    if (letters.length() == 1) {
        return letters;
    }
    if (letters.length() > 1) {
        return reverseString(letters.substr(1,letters.length())) + letters.at(0);
    }else {
        return "ERROR";
    }
}
