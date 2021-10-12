//
// Created by Scheresh on 2021-09-29.
//

#ifndef CPP_2021_FUNCTIONS_H
#define CPP_2021_FUNCTIONS_H

#include <iostream>
#include <cmath>
#include <array>
#include <utility>
#include <string>
#include <sstream>

using namespace std;

//Függvények - 1. feladat
int countBits(int number);

//Függvények - 2. feladat
bool setBit(int& number, int order);

//Függvények - 3. feladat
double mean(double array[], int numElements);

//Függvények - 4. feladat
double stddev(double array[], int numElements);

//Függvények - 5. feladat
pair<double, double> max2(double array[], int numElements);

//Karakterláncok - 1. feladat
double addition(string sentence);

//Karakterláncok - 2. feladat
int countWords(string text);

//Karakterláncok - 3. feladat
string code(string text);
string decode(string text);
void encryptDecrypt(string text);

//Karakterláncok - 4. feladat
string capitalizeWords(string text);

#endif //CPP_2021_FUNCTIONS_H
