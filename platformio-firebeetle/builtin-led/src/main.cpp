#include <Arduino.h>
// Required library: FastLED
#include <FastLED.h>

// we use defines to save memory here;
// a define does (essentially) a find replace in code
// making a constant integer would take memory and do variable lookups
#define NUM_LEDS 1
// the LED is on pin 5 for the firebeetle
#define DATA_PIN 5 
#define CLOCK_PIN 13

// general note: global variables are evil, but since we're not working
// in a multiprogramming environment it's ok (and necessary here)
CRGB leds[NUM_LEDS];

void setup() {
  // Setup FastLED
  // NEOPIXEL is the type of addressable controller
  // Guess it works for the Firebeetle2
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  leds[0] = CRGB::Red;
  FastLED.show();
  delay(1000); // 1000 ms = 1 second
  leds[0] = CRGB::Green;
  FastLED.show();
  delay(1000);
  leds[0] = CRGB::Blue;
  FastLED.show();
  delay(1000);
  leds[0] = CRGB::Black; // Turn off?
  FastLED.show();
  delay(1000);
}