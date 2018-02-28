
int led1 = 10;
int led2 = 9;

void setup() {
  pinMode(led1, OUTPUT); // set pin 10 to output
  pinMode(led2, OUTPUT); // set pin 9 to output
}

void loop() {
  // led1 on and led2 off
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(500);
  // led1 off and led2 on
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(500);
}

