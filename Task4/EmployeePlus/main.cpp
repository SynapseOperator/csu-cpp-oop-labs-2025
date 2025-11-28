#include <iostream>

#include "EmployeePoly.h"
using namespace std;

int main() {
  Employee* p = nullptr;

  Manager m;
  Technician t;

  p = &m;
  p->setData();
  p->printInfo();

  p = &t;
  p->setData();
  p->printInfo();

  return 0;
}
