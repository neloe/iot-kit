#include <Arduino.h>

#define AIN_PIN 15

void setup() {
  pinMode(AIN_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 4.7k seems to give some kind of cool result.  Maybe play around with the trimpots?
  Serial.println(analogReadMilliVolts(AIN_PIN));
  delay(1000);
}