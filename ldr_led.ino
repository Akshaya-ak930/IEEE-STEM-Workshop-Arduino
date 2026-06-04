int ldrPin = A0;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldrPin);

  Serial.print("LDR Module Value: ");
  Serial.println(lightValue);

  if (lightValue < 500) {
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}
