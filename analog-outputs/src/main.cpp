#include <Arduino.h>

// requires teleplot for VS Code

#define PWM_IN 35
#define ANALOG_IN 34
#define PWM_OUT 15
#define ANALOG_OUT 25

#define OUTV 128

void setup() {
  Serial.begin(9600);
  Serial.println("clear out");
  pinMode(PWM_IN, INPUT);
  pinMode(PWM_OUT, OUTPUT);
  pinMode(ANALOG_IN, INPUT);
  pinMode(ANALOG_OUT, OUTPUT);
  // analogWrite takes values between 0 and 255
  analogWrite(PWM_OUT, OUTV);
  //analogWrite(ANALOG_OUT, 128);
  dacWrite(ANALOG_OUT, OUTV);
  analogWriteFrequency(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(">pwm:");
  Serial.println(analogReadMilliVolts(PWM_IN));
  Serial.print(">dac:");
  Serial.println(analogReadMilliVolts(ANALOG_IN));
  //delay(1);
}