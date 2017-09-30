#include <Adafruit_CircuitPlayground.h> // includes library
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip /* variable */ = Adafruit_NeoPixel(1, 6); //(number of LEDs, which pin)

void setup() {
  CircuitPlayground.begin(); 
  strip.begin(); //initializing the NeoPixels
  strip.show();
}

void loop() {
  CircuitPlayground.clearPixels();
  strip.clear();

  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 255, 150,   0);
  CircuitPlayground.setPixelColor(2,   128, 128,   0);
  CircuitPlayground.setPixelColor(3,   0, 255, 0);
  CircuitPlayground.setPixelColor(4,   0,   0, 255);
  
  CircuitPlayground.setPixelColor(5, 0xFF00CC);
  CircuitPlayground.setPixelColor(6, 0xFF0000);
  CircuitPlayground.setPixelColor(7, 0xFFCC00);
  CircuitPlayground.setPixelColor(8, 0xCCCC00);
  CircuitPlayground.setPixelColor(9, 0x0000FF);

  strip.setPixelColor(0, 255, 0, 0);
  strip.setPixelColor(1, 0, 255, 0);
  strip.setPixelColor(2, 0, 0, 255);

  strip.show();

 
  delay(5000);
}
