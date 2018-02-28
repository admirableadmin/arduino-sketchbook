int pinPiezo = 12;
int inputAnalog1 = 14;
int inputAnalog1Value = 0;

void setup() {
  pinMode(pinPiezo, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  inputAnalog1Value = analogRead(inputAnalog1) * 10;
  Serial.println(inputAnalog1Value);
  tone(pinPiezo, inputAnalog1Value);
}
