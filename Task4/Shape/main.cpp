#include "Shape.h"

int main() {
  Point* p = nullptr;

  Point pnt;
  Circle cir;
  Cylinder cyl;

  p = &pnt;
  p->set();
  p->display();

  p = &cir;
  p->set();
  p->display();

  p = &cyl;
  p->set();
  p->display();

  return 0;
}
