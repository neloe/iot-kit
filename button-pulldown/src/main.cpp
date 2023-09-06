#include <Arduino.h>

#define BTN1 15

void setup() {
  pinMode(BTN1, INPUT_PULLDOWN); // here going from 3v3 to input
  // if we wanted to, we could do gnd to an input_pullup pin
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(BTN1);
  Serial.println(val);

  delay(500);
}