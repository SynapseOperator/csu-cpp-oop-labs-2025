#include "BankAccount.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

BankAccount::BankAccount() : accountNo(""), balance(0.0), holderName("") {}

BankAccount::BankAccount(const string& no, const string& name, double bal = 0.0)
    : accountNo(no), balance(bal), holderName(name) {}

bool BankAccount::deposit(double amount) {
  if (amount <= 0) {
    cout << "Deposit failed: amount must be positive.\n";
    return false;
  }
  balance += amount;
  cout << "Deposit success. New balance: " << balance << endl;
  return true;
}

bool BankAccount::withdraw(double amount) {
  if (amount <= 0) {
    cout << "Withdraw failed: amount must be positive.\n";
    return false;
  }
  if (amount > balance) {
    cout << "Withdraw failed: insufficient funds.\n";
    return false;
  }
  balance -= amount;
  cout << "Withdraw success. New balance: " << balance << endl;
  return true;
}

void BankAccount::showBalance() const {
  cout << "Current balance: " << balance << endl;
}

void BankAccount::showDetails() const {
  cout << "Account No : " << accountNo << endl;
  cout << "Holder Name: " << holderName << endl;
  cout << "Balance    : " << balance << endl;
}