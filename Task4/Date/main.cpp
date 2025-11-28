#include <iostream>

#include "Date.h"
using namespace std;

int main() {
  Date d1(2025, 11, 28);
  Date d2;  // 默认 2012-1-1

  cout << "d1 = " << d1 << endl;
  cout << "d2 = " << d2 << endl;

  cout << "d1 > d2 ? " << (d1 > d2 ? "Yes" : "No") << endl;

  cout << "++d2 -> ";
  ++d2;
  cout << d2 << endl;

  cout << "d1 += 10 -> ";
  d1 += 10;
  cout << d1 << endl;

  cout << "d1-- -> ";
  d1--;
  cout << d1 << endl;

  return 0;
}
