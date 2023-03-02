#include <Arduino.h>

#define RPIN 15
#define BUZZER 17
void setup() {
  // put your setup code here, to run once:
  pinMode(RPIN, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(BUZZER, HIGH);
  //delay(1+(analogRead(RPIN)/100));
  delay(1+(analogRead(RPIN)/256));
  digitalWrite(BUZZER, LOW);
  delay(1+(analogRead(RPIN)/256));
  //delay(1+analogRead(RPIN)/100);
}