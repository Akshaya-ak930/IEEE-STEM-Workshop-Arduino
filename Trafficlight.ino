void setup() {
  pinMode(12, OUTPUT); // Red
  pinMode(9, OUTPUT); // Yellow
  pinMode(4, OUTPUT); // Green
}

void loop() {

  // Green ON
  digitalWrite(4, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);
  delay(5000);

  // Yellow ON
  digitalWrite(4, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(12, LOW);
  delay(2000);

  // Red ON
  digitalWrite(4, LOW);
  digitalWrite(9, LOW);
  digitalWrite(12, HIGH);
  delay(5000);
}
