//
// Created by Scheresh on 2021-10-19.
//

#include "Point.h"

Point::Point(int x, int y){
    if(x >= 0 && x <= 2000 && y >= 0 && y <= 2000){
        this->x = x;
        this->y = y;
    }
    else{
        this->x = 0;
        this->y = 0;
    }
}

int Point::getX() const{
    return x;
}

int Point::getY() const{
    return y;
}

//3. feladat
void Point::print() const{
    std::cout << "(" << x << "," << y << ")";
}

//4. feladat
double distance(const Point& a, const Point& b)
{
    double aX = a.getX();
    double aY = a.getY();
    double bX = b.getX();
    double bY = b.getY();
    double result = sqrt(pow((aX-bX), 2) + pow((aY-bY),2));
    return result;
}

//5. feladat
bool isSquare(const Point& a, const Point& b, const Point& c, const Point& d)
{
    set <double> s;
    s.insert(distance(a,c));
    s.insert(distance(c,b));
    s.insert(distance(b,d));
    s.insert(distance(d,a));
    s.insert(distance(a,b));
    s.insert(distance(d,c));
    if(s.size() == 2){
        return true;
    }
    return false;
}

//6. feladat
void testIsSquare(const char * filename)
{
    ifstream myFile(filename);
    int v[8];
    while(!myFile.eof()){
        for(int i=0;i<8;i++){
            myFile >> v[i];
        }
        Point p1(v[0], v[1]);
        Point p2(v[2],v[3]);
        Point p3(v[4], v[5]);
        Point p4(v[6], v[7]);
        if(isSquare(p1,p2,p3,p4)){
            cout << "A"; p1.print(); cout << " ";
            cout << "B"; p2.print();cout << " ";
            cout << "C"; p3.print();cout << " ";
            cout << "D"; p4.print();cout << " ";
            cout<< "is a square" << endl;
        }
        else{
            cout << "A"; p1.print(); cout << " ";
            cout << "B"; p2.print();cout << " ";
            cout << "C"; p3.print();cout << " ";
            cout << "D"; p4.print();cout << " ";
            cout<< "is a NOT square" << endl;
        }
    }
}

//7. feladat
Point * createArray(int numPoints)
{
    Point* array = new Point[numPoints];

    for(int i=0; i<numPoints; i++){
        array[i] = Point(rand() % 2001, rand() % 2001);
    }

    return array;
}

//8. feladat
void printArray(Point * points, int numPoints)
{
    for(int i=0; i<numPoints;i++){
        points[i].print();
        cout << endl;
    }
}

//9. feladat
pair<Point,Point> closestPoints(Point * points, int numPoints)
{
    double distances[numPoints];
    for(int i=0;i<numPoints;i++){
        distances[i] = distance(points[i])
    }
}