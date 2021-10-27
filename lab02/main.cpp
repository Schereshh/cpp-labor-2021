#include <iostream>
#include "Point.h"
#include <iomanip>

using namespace std;

int main()
{
    Point p1(20,10);
    Point p2(10,20);
    Point p3(20,20);
    Point p4(10,10);

    //3. feladat
    cout << "p1";p1.print();
    cout << "p2";p2.print();
    cout << endl;

    //4. feladat
    cout << setprecision(4) << distance(p1, p2) << endl << endl;

    //5. feladat
    isSquare(p1,p2,p3,p4) ? cout << "Yes" << endl : cout << "No" << endl;
    cout << endl;

    //6. feladat
    testIsSquare("points.txt");
    return 0;
}