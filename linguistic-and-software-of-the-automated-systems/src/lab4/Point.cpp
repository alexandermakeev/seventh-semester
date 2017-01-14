#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point() {}

double Point::getX() const {
    return x;
}

void Point::setX(double x) {
    Point::x = x;
}

double Point::getY() const {
    return y;
}

void Point::setY(double y) {
    Point::y = y;
}
