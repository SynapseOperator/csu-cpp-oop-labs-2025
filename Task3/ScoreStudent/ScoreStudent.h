#ifndef SCORE_STUDENT_H
#define SCORE_STUDENT_H

#include <string>
using namespace std;

class Score {
 private:
  double Chinese;
  double English;
  double Mathematics;

 public:
  Score();                              
  Score(double c, double e, double m);  

  double sum() const; 
  void print() const; 
  void modify(double c, double e, double m);
};

class Student {
 private:
  int Num;
  string Name;
  Score MyScore;

 public:
  Student();
  Student(int num, const string& name, const Score& sc);

  double sum() const;
  void print() const;
  void modify(int num, const string& name, const Score& sc);

  int getNum() const { return Num; }
  string getName() const { return Name; }
};

#endif  // SCORE_STUDENT_H
