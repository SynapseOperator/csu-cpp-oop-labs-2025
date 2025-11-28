#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

using std::string;

class BankAccount {
 private:
  string accountNo;
  double balance;
  string holderName;

 public:
  BankAccount();
  BankAccount(const string& no, const string& name, double bal = 0.0);
  bool deposit(double amount);
  bool withdraw(double amount);
  void showBalance() const;
  void showDetails() const;
};

#endif
