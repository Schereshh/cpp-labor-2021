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

//Függvények - 5. feladat
std::pair<double, double> max2(double array[], int numElements)
{
    if(numElements == 0){
        return std::make_pair(NAN, NAN);
    }
    if(numElements == 1){
        return std::make_pair(array[0], array[0]);
    }
    double first = 0, second = 0;
    for(int i=0;i<numElements;i++){
        if(array[i] > first){
            first = array[i];
        }
    }
    for(int i=0;i<numElements;i++){
        if(array[i] > second && array[i] < first){
            second = array[i];
        }
    }
    return std::make_pair(first, second);
}

//Karakterláncok - 1. feladat
double addition(string sentence)
{
    double sum = 0, aux;
    string c;
    istringstream iss(sentence);
    while(iss){
        iss >> aux;
        sum = sum + aux;
    }
    return sum;
}

//Karakterláncok - 2. feladat
int countWords(string text)
{
    istringstream iss(text);
    string c;
    int numOfWords = 0;
    while(iss >> c){
        numOfWords++;
    }
    return numOfWords;
}

//Karakterláncok - 3. feladat
string code(string text)
{
    for(int i=0; i<text.length();i++){
        if((65<=text[i] && 90 >= text[i]) || (97 <= text[i] && 122 >= text[i])){
            if(text[i] == 90){text[i] = 65;}
            else if(text[i] == 122){text[i] = 97;}
            else{text[i]++;}
        }
        else{
            continue;
        }
    }
    return text;
}

string decode(string text)
{
    for(int i=0; i<text.length();i++){
        if((65<=text[i] && 90 >= text[i]) || (97 <= text[i] && 122 >= text[i])){
            if(text[i] == 65){text[i] = 90;}
            else if(text[i] == 97){text[i] = 122;}
            else{text[i]--;}
        }
        else{
            continue;
        }
    }
    return text;
}

void encryptDecrypt(string text)
{
    cout << "Original text: " << text << endl;
    string codedText = code(text);
    cout << "Encrypted text: " << codedText << endl;
    cout << "Decrypted text: " << decode(codedText);
}

//Karakterláncok - 4. feladat
string capitalizeWords(string text)
{
    for(int i=0; i<text.length();i++){
        if(i==0 && (97 <= text[i] && 122 >= text[i])){text[i] -= 32;}
        if((97 <= text[i] && 122 >= text[i]) && (text[i-1] == ' ')){
            text[i] -= 32;
        }
    }
    return text;
}