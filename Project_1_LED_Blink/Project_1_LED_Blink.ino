
int led = 10;

void setup() {
  pinMode(led, OUTPUT); // set pin 10 to output
}

void loop() {
  // led on
  digitalWrite(led, HIGH);
  delay(500);
  // led off
  digitalWrite(led, LOW);
  delay(500);
}

