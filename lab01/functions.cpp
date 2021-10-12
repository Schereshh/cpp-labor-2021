//
// Created by Scheresh on 2021-09-29.
//

#include "functions.h"

//Függvények - 1. feladat
int countBits(int number)
{
    int count = 0;
    while(number != 0){
        if(number & 1 == 1){count++;}
        number = number >> 1;
    }
    return count;
}

//Függvények - 2. feladat
bool setBit(int &number, int order)
{
    if(order > 31 || order < 0) {
        std::cout << "Invalid order number!" << std::endl;
        return false;
    }
    number |= 1UL << order;
    std::cout << number;
    return true;
}

//Függvények - 3. feladat
double mean(double array[], int numElements)
{
    if(numElements == 0)
        return NAN;
    double sum = 0;
    for(int i=0;i<numElements;i++){
        sum += array[i];
    }
    return sum/numElements;
}

//Függvények - 4. feladat
double stddev(double array[], int numElements)
{
    if(numElements == 0)
        return NAN;
    double average = mean(array, numElements);
    double sum = 0;
    for(int i=0;i<numElements;i++){
        sum += (array[i] - average) * (array[i] - average);
    }
    return sqrt(sum/numElements);
}