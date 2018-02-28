
int ledCarRed = 12;
int ledCarYellow = 11;
int ledCarGreen = 10;
int ledPedestrianRed = 9;
int ledPedestrianGreen = 8;
int inputPin = 6;
int inputValue = 0;

void setup() {
  pinMode(ledCarRed, OUTPUT);
  pinMode(ledCarYellow, OUTPUT);
  pinMode(ledCarGreen, OUTPUT);
  pinMode(ledPedestrianRed, OUTPUT);
  pinMode(ledPedestrianGreen, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() {
  inputValue = digitalRead(inputPin);
  if (inputValue == LOW) {
    delay(1000);
    // ledCarYellow
    digitalWrite(ledCarYellow, HIGH);
    digitalWrite(ledCarGreen, LOW);
    delay(1000);
    // ledCarRed
    digitalWrite(ledCarYellow, LOW);
    digitalWrite(ledCarRed, HIGH);
    delay(1000);
    // ledPedestrianGreen
    digitalWrite(ledPedestrianRed, LOW);
    digitalWrite(ledPedestrianGreen, HIGH);
    delay(5000);
    // blink
    digitalWrite(ledPedestrianGreen, LOW);
    delay(200);
    digitalWrite(ledPedestrianGreen, HIGH);
    delay(200);
    digitalWrite(ledPedestrianGreen, LOW);
    delay(200);
    digitalWrite(ledPedestrianGreen, HIGH);
    delay(200);
    digitalWrite(ledPedestrianGreen, LOW);
    delay(200);
    digitalWrite(ledPedestrianGreen, HIGH);
    delay(200);
    // ledPedestrianRed
    digitalWrite(ledPedestrianRed, HIGH);
    digitalWrite(ledPedestrianGreen, LOW);
    delay(1000);
    // ledCarYellow
    digitalWrite(ledCarYellow, HIGH);
    delay(1000);
    // ledCarGreen
    digitalWrite(ledCarYellow, LOW);
    digitalWrite(ledCarGreen, HIGH);
  } else {
    // ledCarGreen
    digitalWrite(ledCarRed, LOW);
    digitalWrite(ledCarYellow, LOW);
    digitalWrite(ledCarGreen, HIGH);
    // ledPedestrianRed
    digitalWrite(ledPedestrianRed, HIGH);
    digitalWrite(ledPedestrianGreen, LOW);
  }
}
