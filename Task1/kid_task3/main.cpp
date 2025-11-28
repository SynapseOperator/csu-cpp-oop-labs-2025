#include "BankAccount.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
    string no, name;
    double init;

    cout << "Input account number: ";
    getline(cin, no);
    cout << "Input holder name: ";
    getline(cin, name);
    cout << "Input initial balance: ";
    cin >> init;

    BankAccount acc(no, name, init);

    cout << "\n=== Account Info ===\n";
    acc.showDetails();

    double amt;
    cout << "\nDeposit amount: ";
    cin >> amt;
    acc.deposit(amt);

    cout << "\nWithdraw amount: ";
    cin >> amt;
    acc.withdraw(amt);

    cout << "\nFinal balance:\n";
    acc.showBalance();

    return 0;
}