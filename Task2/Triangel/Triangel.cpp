#include "Triangel.h"

#include <cmath>
#include <iostream>

using namespace std;

Triangle::Triangle(double x = 1, double y = 1, double z = 1) {
  if (!isValid(x, y, z)) {
    cout << "Invalid triangle, set to 1,1,1.\n";
    a = b = c = 1;
  } else {
    a = x;
    b = y;
    c = z;
  }
}

double Triangle::perimeter() const { return a + b + c; }

double Triangle::area() const {
  double s = (a + b + c) / 2.0;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::printInfo() const {
  cout << "Triangle sides: a=" << a << ", b=" << b << ", c=" << c << endl;
  cout << "Perimeter: " << perimeter() << endl;
  cout << "Area     : " << area() << endl;
}
