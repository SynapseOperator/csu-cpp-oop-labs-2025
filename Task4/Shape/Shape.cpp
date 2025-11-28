#include "Shape.h"

// ----- Point -----
Point::Point(double xx, double yy) : x(xx), y(yy) {}

Point::~Point() {}

void Point::set() {
  cout << "Input x y: ";
  cin >> x >> y;
}

void Point::display() const {
  cout << "Point: (" << x << ", " << y << ")" << endl;
}

// ----- Circle -----
Circle::Circle(double xx, double yy, double r) : Point(xx, yy), radius(r) {}

Circle::~Circle() {}

void Circle::set() {
  cout << "Input x y radius: ";
  cin >> x >> y >> radius;
}

void Circle::display() const {
  cout << "Circle center: (" << x << ", " << y << "), radius = " << radius
       << endl;
}

// ----- Cylinder -----
Cylinder::Cylinder(double xx, double yy, double r, double h)
    : Circle(xx, yy, r), height(h) {}

Cylinder::~Cylinder() {}

void Cylinder::set() {
  cout << "Input x y radius height: ";
  cin >> x >> y >> radius >> height;
}

void Cylinder::display() const {
  cout << "Cylinder center: (" << x << ", " << y << "), radius = " << radius
       << ", height = " << height << endl;
}
