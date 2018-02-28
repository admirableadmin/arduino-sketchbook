int ledStairs = 12;
int inputButton = 10;
int inputButtonValue = 0;
int inputAnalog = 14;
int inputAnalogValue = 0;

void setup() {
  pinMode(ledStairs, OUTPUT);
  pinMode(inputButton, INPUT);
}

void loop() {
  inputButtonValue = digitalRead(inputButton);
  inputAnalogValue = analogRead(inputAnalog);
  
  // Button press
  if (inputButtonValue == LOW) {
    // led on
    digitalWrite(ledStairs, HIGH);
    // delay max 10sek = 10 * 1024
    int onDelay = 10 * inputAnalogValue;
    delay(onDelay);
  } else {
    digitalWrite(ledStairs, LOW);
  }
}
