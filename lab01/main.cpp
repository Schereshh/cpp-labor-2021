#include <iostream>
#include "functions.h"

/**
 * 1. feladat
 * Készítsen függvényt, amely meghatározza egy pozitív egész szám egyes bitjeinek a számát
 * bitműveleteket használva.
 * A main függvényben írassa ki 0-tól 127-ig a számok egyes bitjeinek számát. Milyen
 * szabályosságot lehet megfigyelni?
 */

using namespace std;

int main() {
    //Függvények - 1. feladat
    cout << "1. feladat:" << endl;
    for(int i=0; i<=127;i++){
        cout << "#" << i << ": " << countBits(i) << endl;
    }
    cout << endl;

    //Függvények - 2. feladat
    cout << "2.feladat: " << endl;
    int number = 2;
    setBit(number, 3);
    cout << endl << endl;

    //Függvények - 3.feladat
    cout<< "3. feladat" << endl;
    double v[] = {2,5,7,10,4.6};
    cout << "The average of the array is: " << mean(v, sizeof(v)/sizeof(v[0])) << endl << endl;

    //Függvények - 4. feladat
    cout<< "4. feladat" << endl;
    double w[] = {6,2,3,1};
    cout <<"The standard deviation of the values is: " << stddev(w, sizeof(w)/sizeof(w[0])) << endl;

    return 0;
}
