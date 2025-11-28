#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Point {
 protected:
  double x;
  double y;

 public:
  Point(double xx = 0, double yy = 0);
  virtual ~Point();

  virtual void set();
  virtual void display() const;
};

class Circle : public Point {
 protected:
  double radius;

 public:
  Circle(double xx = 0, double yy = 0, double r = 0);
  ~Circle() override;

  void set() override;
  void display() const override;
};

class Cylinder : public Circle {
 private:
  double height;

 public:
  Cylinder(double xx = 0, double yy = 0, double r = 0, double h = 0);
  ~Cylinder() override;

  void set() override;
  void display() const override;
};

#endif  // SHAPE_H
