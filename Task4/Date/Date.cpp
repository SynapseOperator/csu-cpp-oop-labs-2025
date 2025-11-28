#include "Date.h"

// 基准日期：1900-01-01 作为 day 0

bool Date::isLeap(int y) {
  return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int Date::daysInMonth(int y, int m) {
  static int dm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (m == 2 && isLeap(y)) return 29;
  return dm[m];
}

bool Date::isValid(int y, int m, int d) const {
  if (y <= 0 || m <= 0 || m > 12 || d <= 0) return false;
  if (d > daysInMonth(y, m)) return false;
  return true;
}

long Date::toDays() const {
  long days = 0;
  for (int y = 1900; y < year; ++y) {
    days += isLeap(y) ? 366 : 365;
  }
  for (int m = 1; m < month; ++m) {
    days += daysInMonth(year, m);
  }
  days += (day - 1);
  return days;
}

void Date::fromDays(long days) {
  int y = 1900;
  while (true) {
    int yearDays = isLeap(y) ? 366 : 365;
    if (days >= yearDays) {
      days -= yearDays;
      ++y;
    } else
      break;
  }
  int m = 1;
  while (true) {
    int md = daysInMonth(y, m);
    if (days >= md) {
      days -= md;
      ++m;
    } else
      break;
  }
  year = y;
  month = m;
  day = (int)days + 1;
}

Date::Date(int y, int m, int d) {
  if (!isValid(y, m, d)) {
    year = 2012;
    month = 1;
    day = 1;
  } else {
    year = y;
    month = m;
    day = d;
  }
}

void Date::setDate(int y, int m, int d) {
  if (!isValid(y, m, d)) {
    cout << "Invalid date, not changed.\n";
    return;
  }
  year = y;
  month = m;
  day = d;
}

ostream& operator<<(ostream& os, const Date& dt) {
  os << dt.year << "-" << dt.month << "-" << dt.day;
  return os;
}

bool Date::operator==(const Date& other) const {
  return year == other.year && month == other.month && day == other.day;
}
bool Date::operator!=(const Date& other) const { return !(*this == other); }
bool Date::operator<(const Date& other) const {
  return this->toDays() < other.toDays();
}
bool Date::operator>(const Date& other) const {
  return this->toDays() > other.toDays();
}

Date& Date::operator++() {
  long d = toDays();
  ++d;
  fromDays(d);
  return *this;
}

Date& Date::operator--() {
  long d = toDays();
  --d;
  fromDays(d);
  return *this;
}

Date Date::operator++(int) {
  Date tmp = *this;
  ++(*this);
  return tmp;
}

Date Date::operator--(int) {
  Date tmp = *this;
  --(*this);
  return tmp;
}

Date& Date::operator+=(int n) {
  long d = toDays();
  d += n;
  fromDays(d);
  return *this;
}

Date& Date::operator-=(int n) {
  long d = toDays();
  d -= n;
  fromDays(d);
  return *this;
}
