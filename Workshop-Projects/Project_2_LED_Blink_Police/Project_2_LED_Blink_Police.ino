
int led1 = 10;
int led2 = 9;

void setup() {
  pinMode(led1, OUTPUT); // set pin 10 to output
  pinMode(led2, OUTPUT); // set pin 9 to output
}

void digitalWriteDelay(int pin, bool value, int wait) {
  digitalWrite(pin, value);
  delay(wait);
}

void loop() {
  // led1
  digitalWriteDelay(led1, HIGH, 50);
  digitalWriteDelay(led1, LOW, 50);
  digitalWriteDelay(led1, HIGH, 50);
  digitalWriteDelay(led1, LOW, 50);
  digitalWriteDelay(led1, HIGH, 50);
  digitalWriteDelay(led1, LOW, 200);
  // led2
  digitalWriteDelay(led2, HIGH, 50);
  digitalWriteDelay(led2, LOW, 50);
  digitalWriteDelay(led2, HIGH, 50);
  digitalWriteDelay(led2, LOW, 50);
  digitalWriteDelay(led2, HIGH, 50);
  digitalWriteDelay(led2, LOW, 200);
}

