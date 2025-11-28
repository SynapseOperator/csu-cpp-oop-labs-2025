#ifndef RECTANGLE_H
#define RECTANGLE_H

class Point {
private:
    double x, y;
public:
    Point(double xx = 0, double yy = 0);
    double getX() const;
    double getY() const;
    void set(double xx, double yy);
};

class Rectangle {
private:
    Point p1;
    Point p2;
public:
    Rectangle(const Point& a, const Point& b);
    void printInfo();
};

#endif