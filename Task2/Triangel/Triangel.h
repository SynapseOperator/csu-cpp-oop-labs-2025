#ifndef TRIANGEL_H
#define TRIANGEL_H

class Triangle {
 private:
  double a, b, c;
  bool isValid(double x, double y, double z);

 public:
  Triangle(double x = 1, double y = 1, double z = 1);
  double perimeter() const;
  double area() const;
  void printInfo() const;
};

#endif