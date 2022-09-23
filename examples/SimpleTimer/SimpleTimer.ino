#include <Arduino.h>
#include <Dorpac-timer.h>

Dorpac-timer everySecond(1);

void setup() {
    Serial.begin(115200);
}

void loop() {
    if (everySecond.isDone()) Serial.println(millis());
}
