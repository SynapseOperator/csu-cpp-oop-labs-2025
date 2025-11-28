#include "Salary.h"

Salary::Salary() : Wage(0), Subsidy(0), Rent(0), WaterFee(0), ElecFee(0) {}

Salary::Salary(double w, double s, double r, double wf, double ef)
    : Wage(w), Subsidy(s), Rent(r), WaterFee(wf), ElecFee(ef) {}
void Salary::setWage(double f) { Wage = f; }
void Salary::setSubsidy(double f) { Subsidy = f; }
void Salary::setRent(double f) { Rent = f; }
void Salary::setWaterFee(double f) { WaterFee = f; }
void Salary::setElecFee(double f) { ElecFee = f; }
double Salary::getWage() const { return Wage; }
double Salary::getSubsidy() const { return Subsidy; }
double Salary::getRent() const { return Rent; }
double Salary::getWaterFee() const { return WaterFee; }
double Salary::getElecFee() const { return ElecFee; }
double Salary::RealSalary() const {
  return Wage + Subsidy - Rent - WaterFee - ElecFee;
}