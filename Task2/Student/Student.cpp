#include "Student.h"

#include <iostream>

using std::cout;
using std::endl;

Student::Student(int i = 0, double s = 0.0) : id(i), score(s) {}

void Student::set(int i, double s) {
  id = i;
  score = s;
}

int Student::getId() const { return id; }
double Student::getScore() const { return score; }

void maxStudent(Student* p, int n) {
  if (n <= 0) return;
  int maxIndex = 0;
  for (int i = 1; i < n; ++i) {
    if (p[i].getScore() > p[maxIndex].getScore()) maxIndex = i;
  }
  cout << "Highest score student: id=" << p[maxIndex].getId()
       << ", score=" << p[maxIndex].getScore() << endl;
}