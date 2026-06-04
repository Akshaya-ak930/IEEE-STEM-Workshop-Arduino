int potPin = A0;   // Potentiometer
int ledPin = 9;    // LED pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(potPin);   // Read 0-1023

  int brightness = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);        // Set LED brightness

  Serial.print("Potentiometer: ");
  Serial.print(sensorValue);
  Serial.print("  Brightness: ");
  Serial.println(brightness);

  delay(100);
}
