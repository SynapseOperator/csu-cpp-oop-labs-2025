#include "EmployeeSys.h"
#include <iostream>
using namespace std;

// ----- Employee -----

Employee::Employee(const string& n, int i)
    : name(n), id(i), level(1), salary(0.0) {}

Employee::~Employee() {}

void Employee::promote() {
    ++level;
}

void Employee::showInfo() const {
    cout << "Name : " << name   << endl;
    cout << "ID   : " << id     << endl;
    cout << "Level: " << level  << endl;
    cout << "Salary: " << salary << endl;
}

// ----- Manager -----

Manager::Manager(const string& n, int i)
    : Employee(n, i) {}

void Manager::promote() {
    level = 4; 
}

void Manager::computeSalary() {
    salary = 8000.0;
}

void Manager::showInfo() const {
    cout << "[Manager]" << endl;
    Employee::showInfo();
}

// ----- Technician -----

Technician::Technician(const string& n, int i, int h)
    : Employee(n, i), hours(h) {}

void Technician::setHours(int h) {
    hours = h;
}

void Technician::promote() {
    level = 3;
}

void Technician::computeSalary() {
    salary = hours * 100.0;
}

void Technician::showInfo() const {
    cout << "[Technician]" << endl;
    Employee::showInfo();
    cout << "Hours: " << hours << endl;
}

// ----- Salesman -----

Salesman::Salesman(const string& n, int i, double s)
    : Employee(n, i), sales(s) {}

void Salesman::setSales(double s) {
    sales = s;
}

void Salesman::promote() {
    level = 1;
}

void Salesman::computeSalary() {
    salary = sales * 0.04;
}

void Salesman::showInfo() const {
    cout << "[Salesman]" << endl;
    Employee::showInfo();
    cout << "Sales: " << sales << endl;
}

// ----- SalesManager -----

SalesManager::SalesManager(const string& n, int i, double ds)
    : Employee(n, i), departmentSales(ds) {}

void SalesManager::setDeptSales(double ds) {
    departmentSales = ds;
}

void SalesManager::promote() {
    level = 3;
}

void SalesManager::computeSalary() {
    salary = 5000.0 + departmentSales * 0.005; 
}

void SalesManager::showInfo() const {
    cout << "[SalesManager]" << endl;
    Employee::showInfo();
    cout << "Dept sales: " << departmentSales << endl;
}
