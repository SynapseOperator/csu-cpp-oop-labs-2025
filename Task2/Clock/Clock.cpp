#include "Clock.h"

#include <iomanip>
#include <iostream>

using namespace std;

Clock::Clock(int h = 0, int m = 0, int s = 0) { setTime(h, m, s); }

void Clock::setTime(int h, int m, int s) {
  if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
    cout << "Invalid time, set to 00:00:00.\n";
    hour = minute = second = 0;
  } else {
    hour = h;
    minute = m;
    second = s;
  }
}

void Clock::setHour(int h) { setTime(h, minute, second); }
void Clock::setMinute(int m) { setTime(hour, m, second); }
void Clock::setSecond(int s) { setTime(hour, minute, s); }

void Clock::show() const {
  cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0')
       << minute << ":" << setw(2) << setfill('0') << second << endl;
}