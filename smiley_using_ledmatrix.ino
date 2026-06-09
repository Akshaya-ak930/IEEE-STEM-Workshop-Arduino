#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 64

Adafruit_NeoPixel matrix(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  matrix.begin();
  matrix.clear();

  // Left eye
  matrix.setPixelColor(9,  matrix.Color(255,255,0));
  matrix.setPixelColor(17, matrix.Color(255,255,0));

  // Right eye
  matrix.setPixelColor(14, matrix.Color(255,255,0));
  matrix.setPixelColor(22, matrix.Color(255,255,0));

  // Smile
  matrix.setPixelColor(41, matrix.Color(255,255,0));
  matrix.setPixelColor(46, matrix.Color(255,255,0));
  matrix.setPixelColor(50, matrix.Color(255,255,0));
  matrix.setPixelColor(51, matrix.Color(255,255,0));
  matrix.setPixelColor(52, matrix.Color(255,255,0));
  matrix.setPixelColor(53, matrix.Color(255,255,0));

  matrix.show();
}

void loop() {
}
