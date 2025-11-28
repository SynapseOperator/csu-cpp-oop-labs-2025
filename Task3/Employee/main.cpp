#include "EmployeeSys.h"
#include <iostream>
using namespace std;

int main() {
    Manager       m("ZhangSan", 1001);
    Technician    t("LiSi",     1002, 160);
    Salesman      s("WangWu",   1003, 50000.0);
    SalesManager  sm("ZhaoLiu", 1004, 200000.0);

    m.promote();
    t.promote();
    s.promote();
    sm.promote();

    m.computeSalary();
    t.computeSalary();
    s.computeSalary();
    sm.computeSalary();

    m.showInfo();
    cout << "--------------------\n";
    t.showInfo();
    cout << "--------------------\n";
    s.showInfo();
    cout << "--------------------\n";
    sm.showInfo();

    return 0;
}
