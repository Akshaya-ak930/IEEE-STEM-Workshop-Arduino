const int redPin = 9;
const int greenPin = 6;
const int bluePin = 3;

void setup() {
  Serial.begin(9600);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  Serial.println("Type RED, GREEN, BLUE or OFF");
}

void loop() {

  if (Serial.available() > 0) {

    String command = Serial.readString();

    command.trim();

    if (command == "RED") {

      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);

    }

    else if (command == "GREEN") {

      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);

    }

    else if (command == "BLUE") {

      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);

    }

    else if (command == "OFF") {

      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);

    }
  }
}
