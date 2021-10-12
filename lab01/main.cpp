#include <iostream>
#include "functions.h"
#include <string>

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
    cout << "Fuggvenyek" << endl << "------------------------" << endl;
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
    cout << endl;

    //Függvények - 5. feladat
    cout << "5. feladat" << endl;
    cout << "The array: " << endl;
    double array[] = {11, 39, 10, 85, 7, 90, 14};
    pair<double,double> pair1 = max2(array, sizeof(array)/sizeof(array[0]));
    for(int i=0;i<sizeof(array)/sizeof(array[0]); i++){
        cout << array[i] << " ";
    }
    cout << endl << "First: " << pair1.first << endl << "Second: " << pair1.second << endl << endl;

    //Karakterláncok - 1. feladat
    cout << "Karakterlancok" << endl << "------------------------" << endl<<"1. feladat" << endl;
    string sentence;
    /*cout << "Enter the string" << endl;
    getline(cin, sentence);*/
    cout << addition("1 2 sad 3") << endl << endl;

    //Karakterláncok - 2. feladat
    cout << "2. feladat" << endl;
    string string1 = "Fejlett programozas C++";
    /*cout << "Enter the string" << endl;
    getline(cin, string1);*/
    cout << "# of words: " << countWords(string1) << endl << endl;

    //Karakterláncok - 3. feladat
    cout << "3. feladat" << endl;
    encryptDecrypt("Sapientia EMTE");
    cout << endl << endl;

    //Karakterláncok - 4. feladat
    cout << "4. feladat" << endl;
    cout << "Modified text: " << endl << capitalizeWords("fejlett programozas C++ - seres tamas");

    return 0;
}
