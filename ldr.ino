void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int brightness=analogRead(A0);
  Serial.print("LDR Value=");
  Serial.println(brightness);
  delay(500);

}
