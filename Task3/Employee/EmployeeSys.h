#ifndef EMPLOYEE_SYS_H
#define EMPLOYEE_SYS_H

#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    int level;
    double salary;

public:
    Employee(const string& n = "", int i = 0);
    virtual ~Employee();

    virtual void promote();         
    virtual void computeSalary() = 0; 
    virtual void showInfo() const;   

    void setLevel(int lv) { level = lv; }
    int  getLevel() const { return level; }
};

class Manager : public Employee {
public:
    Manager(const string& n = "", int i = 0);
    void promote() override;
    void computeSalary() override;
    void showInfo() const override;
};

class Technician : public Employee {
private:
    int hours;
public:
    Technician(const string& n = "", int i = 0, int h = 0);
    void setHours(int h);
    void promote() override;
    void computeSalary() override;
    void showInfo() const override;
};

class Salesman : public Employee {
private:
    double sales; 
public:
    Salesman(const string& n = "", int i = 0, double s = 0.0);
    void setSales(double s);
    void promote() override;
    void computeSalary() override;
    void showInfo() const override;
};

class SalesManager : public Employee {
private:
    double departmentSales;
public:
    SalesManager(const string& n = "", int i = 0, double ds = 0.0);
    void setDeptSales(double ds);
    void promote() override;
    void computeSalary() override;
    void showInfo() const override;
};

#endif // EMPLOYEE_SYS_H
