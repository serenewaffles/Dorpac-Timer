#ifndef Dorpac-timer_h
#define Dorpac-timer_h

#include <Arduino.h>

class Dorpac-timer {
public:
  Dorpac-timer();
  Dorpac-timer(int);
  bool isDone();
  void setInterval(int);
  void resetTimer();
private:
  int _interval;
  unsigned long _nextIteration;
};

#endif