#include <iostream>

#include "Rectangle.h"


Point::Point(double xx = 0, double yy = 0) : x(xx), y(yy) {}
double Point::getX() const { return x; }
double Point::getY() const { return y; }

void Point::set(double xx, double yy) {
  x = xx;
  y = yy;
}