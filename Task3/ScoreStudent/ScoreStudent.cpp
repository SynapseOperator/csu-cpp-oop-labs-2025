#include "ScoreStudent.h"

#include <iostream>
using namespace std;

// ----- Score -----

Score::Score() : Chinese(0), English(0), Mathematics(0) {}

Score::Score(double c, double e, double m)
    : Chinese(c), English(e), Mathematics(m) {}

double Score::sum() const { return Chinese + English + Mathematics; }

void Score::print() const {
  cout << "Chinese: " << Chinese << ", English: " << English
       << ", Math: " << Mathematics << ", Sum: " << sum() << endl;
}

void Score::modify(double c, double e, double m) {
  Chinese = c;
  English = e;
  Mathematics = m;
}

// ----- Student -----

Student::Student() : Num(0), Name(""), MyScore() {}

Student::Student(int num, const string& name, const Score& sc)
    : Num(num), Name(name), MyScore(sc) {}

double Student::sum() const { return MyScore.sum(); }

void Student::print() const {
  cout << "Num : " << Num << endl;
  cout << "Name: " << Name << endl;
  cout << "Score -> ";
  MyScore.print();
}

void Student::modify(int num, const string& name, const Score& sc) {
  Num = num;
  Name = name;
  MyScore = sc;
}
