int buzzerPin = 8;

int melody[] = {
  262, // C4
  294, // D4
  330, // E4
  349, // F4
  392, // G4
  440, // A4
  494, // B4
  523  // C5
};

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  for (int i = 0; i < 8; i++) {

    tone(buzzerPin, melody[i]);

    delay(500);

    noTone(buzzerPin);

    delay(50);
  }

  delay(1000);
}
