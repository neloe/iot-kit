#include <Arduino.h>

// LED pins, RGBA
#define R_PIN 14
#define G_PIN 0
#define B_PIN 26
#define A_PIN 25

void setup() {
  pinMode(R_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);
  pinMode(A_PIN, OUTPUT);

  digitalWrite(R_PIN, LOW);
  digitalWrite(G_PIN, LOW);
  digitalWrite(B_PIN, LOW);
  digitalWrite(A_PIN, LOW);
}

void loop() {
  digitalWrite(R_PIN, HIGH);
  delay(1000);
  digitalWrite(R_PIN, LOW);
  digitalWrite(G_PIN, HIGH);
  delay(1000);
  digitalWrite(G_PIN, LOW);
  digitalWrite(B_PIN, HIGH);
  delay(1000);
  digitalWrite(B_PIN, LOW);
  digitalWrite(A_PIN, HIGH);
  delay(1000);
  digitalWrite(A_PIN, LOW);
}