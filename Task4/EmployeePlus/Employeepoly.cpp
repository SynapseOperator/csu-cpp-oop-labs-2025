#include "EmployeePoly.h"

#include <iostream>
using namespace std;

// ----- Employee -----
Employee::Employee(const string& n, int i) : name(n), id(i) {}
Employee::~Employee() {}

void Employee::setData() {
  cout << "Input name and id: ";
  cin >> name >> id;
}

// ----- Manager -----
Manager::Manager(const string& n, int i, double s)
    : Employee(n, i), salary(s) {}

void Manager::setData() {
  cout << "[Manager] ";
  Employee::setData();
  cout << "Input monthly salary: ";
  cin >> salary;
}

double Manager::computeSalary() const { return salary; }

void Manager::printInfo() const {
  cout << "[Manager] Name: " << name << ", ID: " << id
       << ", Salary: " << computeSalary() << endl;
}

// ----- Technician -----
Technician::Technician(const string& n, int i, double w, int h)
    : Employee(n, i), wage(w), hours(h) {}

void Technician::setData() {
  cout << "[Technician] ";
  Employee::setData();
  cout << "Input wage per hour and hours: ";
  cin >> wage >> hours;
}

double Technician::computeSalary() const { return wage * hours; }

void Technician::printInfo() const {
  cout << "[Technician] Name: " << name << ", ID: " << id
       << ", Salary: " << computeSalary() << endl;
}
