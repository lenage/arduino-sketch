#include <Arduino.h>
int brightness = 0;
int fadeAmount = 5;
int delayDuration = 30;

void setup()  {
  pinMode(13, OUTPUT);
}

void loop()  {
  analogWrite(3, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount ;
  }
  delay(delayDuration);
}
