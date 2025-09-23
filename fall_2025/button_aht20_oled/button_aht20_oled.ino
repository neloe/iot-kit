// Install the Adafruit AHTX0 library
#include <Adafruit_AHTX0.h>

#define BTN_PIN 7

Adafruit_AHTX0 aht20;
sensors_event_t temp, humid;

void setup() {
  // put your setup code here, to run once:
  pinMode(BTN_PIN, INPUT_PULLDOWN);
  Serial.begin(115200);
  while(!Serial) delay(1);
  if (!aht20.begin())
  {
    Serial.println("Could not init sensor. halp");
    while(1);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(digitalRead(BTN_PIN));
  if (digitalRead(BTN_PIN))
  {
    aht20.getEvent(&humid, &temp);
    Serial.print("Humidity: ");
    Serial.println(humid.relative_humidity);
    Serial.print("Temperature: ");
    Serial.println(temp.temperature);
  }
  delay(500);
}
