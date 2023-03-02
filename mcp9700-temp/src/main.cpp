#include <Arduino.h>

#define V0C 500
#define Tc 10.0
#define PIN 15

void setup() {
  pinMode(PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  static double volt = 3.3 / 4095;
  // put your main code here, to run repeatedly:
  int input = analogReadMilliVolts(PIN);
  //Serial.println(input);
  //Serial.println(input * volt);
  //Serial.println(analogReadMilliVolts(PIN));
  Serial.println((input - V0C)/Tc);
  delay(2000);
}