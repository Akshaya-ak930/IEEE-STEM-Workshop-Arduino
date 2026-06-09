#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 64

Adafruit_NeoPixel matrix(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  matrix.begin();
  matrix.clear();

  for(int i = 0; i < NUMPIXELS; i++) {
    matrix.setPixelColor(i, matrix.Color(255, 0, 0)); // Red
  }

  matrix.show();
}

void loop() {
}
