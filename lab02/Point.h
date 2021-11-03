//
// Created by Scheresh on 2021-10-19.
//

#ifndef CPP_2021_POINT_H
#define CPP_2021_POINT_H

#include <iostream>
#include <math.h>
#include <set>
#include <fstream>
#include <string>
#include <random>

using namespace std;

class Point{
private:
    int x,y;
public:
    Point(int x=0, int y=0);
    int getX() const;
    int getY() const;

    //3. feladat
    void print() const;
};

//4. feladat
double distance(const Point& a, const Point& b);

//5. feladat
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d);
#endif //CPP_2021_POINT_H

//6. feladat
void testIsSquare(const char * filename);

//7. feladat
Point * createArray(int numPoints);