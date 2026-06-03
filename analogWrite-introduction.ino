const int ledPin = 11;

void setup() {
}

void loop() {
  analogWrite(ledPin, 50);   // Dim
  delay(1000);

  analogWrite(ledPin, 128);  // Medium brightness
  delay(1000);

  analogWrite(ledPin, 255);  // Full brightness
  delay(1000);

  analogWrite(ledPin, 0);    // Off
  delay(1000);
}
