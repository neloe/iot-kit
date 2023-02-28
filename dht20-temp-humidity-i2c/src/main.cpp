#include <Arduino.h>
#include <Adafruit_AHTX0.h>

Adafruit_AHTX0 aht;
// From official example code
void setup() {
  Serial.begin(9600);
  Serial.println("AHT20 demo");
  if (! aht.begin()) {
    Serial.println("Cannot find Sensor; check wiring");
    while(1) delay(10);
  }
  Serial.println("AHT20 found");
}

void loop() {
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp); // we are passing by reference here so the values change
  Serial.print("Temp: "); 
  Serial.print(temp.temperature);
  Serial.println(" C");
  Serial.print("Humidity: ");
  Serial.print(humidity.relative_humidity);
  Serial.println("% rH");
  delay(500);
}