#include <iostream>
using namespace std;

class X {
 private:
  int a;
  int& b;
  const int c;
 public:
  void setA(int i) { a = i; }
  X(int i, int& ref, int k) : a(i), b(ref), c(k) {}
  // 保留const，只可读
  int getC() const { return c; }
  void print() const {
    cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
  }
};

int main() {
  int t = 0;
  X x1(1, t, 3);
  x1.print();
  return 0;
}
