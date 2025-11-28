#ifndef CLOCK_H
#define CLOCK_H

class Clock {
 private:
  int hour;
  int minute;
  int second;

 public:
  Clock(int h = 0, int m = 0, int s = 0);
  void setTime(int h, int m, int s);
  void setHour(int h);
  void setMinute(int m);
  void setSecond(int s);
  void show() const;
};

#endif