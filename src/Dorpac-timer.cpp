#include <Arduino.h>
#include "Dorpac-timer.h"

Dorpac-timer::Dorpac-timer() {
  _interval = 0;
}

Dorpac-timer::Dorpac-timer(int interval) {
  _interval = interval * 1000;
  _nextIteration = millis() + _interval;
}

bool Dorpac-timer::isDone() {
  if (_interval == 0) {
    return false;
  }
  if (millis() > _nextIteration) {
    _nextIteration = millis() + _interval;
    return true;
  } else {
    return false;
  }
}

void Dorpac-timer::setInterval(int interval) {
  _interval = interval * 1000;
}

void Dorpac-timer::resetTimer() {
  _nextIteration = millis() + _interval;
}