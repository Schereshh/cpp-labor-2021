//
// Created by Scheresh on 2021-10-14.
//

#include "Point.h"

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

int Point::getX() const {
    return this->x;
}

int Point::getY() const {
    return this->y;
}

double Point::distanceTo(const Point &point) const {
    int p1 = point.getX() - this->getX();
    int p2 = point.getY() - this->getY();
    return sqrt((p1 * p1) + (p2 * p2));
}
