#ifndef POINT_H
#define POINT_H
#define M 2000
#define range_from -10
#define range_to 10

#include <iostream>
#include <math.h>
#include <random>

class Point{
private:
    int x, y;
public:
    Point( int x=0, int y=0);
    int getX() const;
    int getY() const;
    double distanceTo(const Point& point)const ;
};
#endif /* PONT_H */