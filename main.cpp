#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Reverse Re;
    Truckloads Tl;
    EfficientTruckloads Ef;

    int num;
    string word;
    int truck1;
    int truck2;


    cout << "type what you want" << endl;
    cin >> num;
    cin >> word;
    cin >> truck1;
    cin >> truck2;
    cout << endl;

    if (num > 0){
        cout <<  Re.reverseDigit(num) << " ";
    } else {
        cout <<  "ERROR ";
    }

    cout << Re.reverseString(word) << " ";

    if (truck1 > 0 || truck2 > 0){
            cout << Tl.numTrucks(truck1 , truck2) << " ";
            cout << Ef.numTrucks(truck1 , truck2) << " ";
    } else {
            cout << "ERROR ERROR ";
    }



    cout << endl;


    return 0;
}