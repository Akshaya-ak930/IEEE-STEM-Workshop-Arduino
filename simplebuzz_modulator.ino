int potPin=A0;
int buzzerPin=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
   int sensorValue = analogRead(potPin);

   int frequency = map(sensorValue, 0, 1023, 100, 2000);
   tone(buzzerPin, frequency);
   Serial.print("ADC = ");
   Serial.print(sensorValue);
   Serial.print(" Frequency = ");
   Serial.println(frequency);

   delay(50);


}
