#include <iostream>

#include "Salary.h"

using namespace std;

int main() {
    Salary s;
    s.setWage(5000);
    s.setSubsidy(800);
    s.setRent(1000);
    s.setWaterFee(100);
    s.setElecFee(150);

    cout << "Real salary: " << s.RealSalary() << endl;
    return 0;
}
