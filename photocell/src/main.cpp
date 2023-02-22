#include <Arduino.h>

#define AIN_PIN 15

void setup() {
  pinMode(AIN_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // TODO: Find appropriate resistor value that gives interesting range of values
  Serial.println(analogRead(AIN_PIN));
  delay(1000);
}