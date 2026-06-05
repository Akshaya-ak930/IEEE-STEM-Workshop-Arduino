const int lm35Pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(lm35Pin);

  float voltage = adcValue * (5.0 / 1023.0);

  float temperatureC = voltage * 100.0;

  Serial.print("ADC Value: ");
  Serial.print(adcValue);

  Serial.print("  Voltage: ");
  Serial.print(voltage);
  Serial.print(" V");

  Serial.print("  Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000);
}
