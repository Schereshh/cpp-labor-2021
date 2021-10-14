#include <iostream>
#include <iomanip>
#include "Point.h"
#include "PointSet.h"

using namespace std;

int main()
{
    Point p1(1,0);
    Point p2(2 ,3);
    cout << "p1(" << p1.getX() << "," << p1.getY() << ")" << endl
        << "p2(" << p2.getX() << "," << p2.getY() << ")" << endl;
    cout << "Distance between p1 and p2: " << setprecision(3) << p1.distanceTo(p2);
 }