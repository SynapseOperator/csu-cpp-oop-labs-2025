#include <iostream>

#include "Publication.h"
using namespace std;

int main() {
  Book b;
  Tape t;

  cout << "=== Input Book ===" << endl;
  b.inputData();
  cout << "\n=== Input Tape ===" << endl;
  t.inputData();

  cout << "\n=== Show Book ===" << endl;
  b.display();
  cout << "\n=== Show Tape ===" << endl;
  t.display();

  return 0;
}
