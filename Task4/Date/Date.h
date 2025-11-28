#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
 private:
  int year;
  int month;
  int day;

  static bool isLeap(int y);
  static int daysInMonth(int y, int m);
  bool isValid(int y, int m, int d) const;
  long toDays() const;
  void fromDays(long days);

 public:
  Date(int y = 2012, int m = 1, int d = 1);

  void setDate(int y, int m, int d);

  friend ostream& operator<<(ostream& os, const Date& dt);

  bool operator==(const Date& other) const;
  bool operator!=(const Date& other) const;
  bool operator<(const Date& other) const;
  bool operator>(const Date& other) const;

  Date& operator++();
  Date& operator--();

  Date operator++(int);
  Date operator--(int);

  Date& operator+=(int n);
  Date& operator-=(int n);
};

#endif  // DATE_H
