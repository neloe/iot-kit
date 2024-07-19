#include <Arduino.h>

// LED pins, RGBA
#define R_PIN 14
#define G_PIN 0
#define B_PIN 26
#define A_PIN 25

int count = 0;
int pins [] = {R_PIN, G_PIN, B_PIN, A_PIN};
// let's play with bitwise magic!
void int_to_bin_leds(int val)
{
  // some fun bitwise magic
  digitalWrite(R_PIN, LOW);
  digitalWrite(G_PIN, LOW);
  digitalWrite(B_PIN, LOW);
  digitalWrite(A_PIN, LOW);
  
  // we can only do the lowest 4 bits since we have 4 leds
  for (int i=0; i<4; i++)
  {
    // some fun bitwise magic
    // we bitshift to get the ith bit to the lowest position
    // then bitwise and with 1 to determine high or low
    digitalWrite(pins[i], (val >> i)&1);
  }
}

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
  int_to_bin_leds(count);
  count++;
  count &= 15;
  delay(1000);
}