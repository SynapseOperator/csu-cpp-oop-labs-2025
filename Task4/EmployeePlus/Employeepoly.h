#ifndef EMPLOYEE_POLY_H
#define EMPLOYEE_POLY_H

#include <string>
using namespace std;

class Employee {
 protected:
  string name;
  int id;

 public:
  Employee(const string& n = "", int i = 0);
  virtual ~Employee();

  virtual void setData();
  virtual double computeSalary() const = 0;
  virtual void printInfo() const = 0;
};

class Manager : public Employee {
 private:
  double salary;

 public:
  Manager(const string& n = "", int i = 0, double s = 0.0);
  void setData() override;
  double computeSalary() const override;
  void printInfo() const override;
};

class Technician : public Employee {
 private:
  double wage;
  int hours;

 public:
  Technician(const string& n = "", int i = 0, double w = 0.0, int h = 0);
  void setData() override;
  double computeSalary() const override;
  void printInfo() const override;
};

#endif  // EMPLOYEE_POLY_H
