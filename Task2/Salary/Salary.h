#ifndef SALARY_H
#define SALARY_H

class Salary {
 private:
  double Wage;
  double Subsidy;
  double Rent;
  double WaterFee;
  double ElecFee;

 public:
  Salary();
  Salary(double w, double s, double r, double wf, double ef);
  
  void setWage(double f);
  void setSubsidy(double f);
  void setRent(double f);
  void setWaterFee(double f);
  void setElecFee(double f);

  double getWage() const;
  double getSubsidy() const;
  double getRent() const;
  double getWaterFee() const;
  double getElecFee() const;
  double RealSalary() const;
};

#endif