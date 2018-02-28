int ledBlue = 5;
int ledGreen = 6;
int ledRed = 9;

int inputAnalog1 = 14;
int inputAnalog1Value = 0;
int inputAnalog2 = 15;
int inputAnalog2Value = 0;
int inputAnalog3 = 16;
int inputAnalog3Value = 0;

void setup() {
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  
  /*
  // blink
  digitalWrite(ledBlue, HIGH);
  delay(500);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(500);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, HIGH);
  delay(500);
  digitalWrite(ledRed, LOW);
  */
  
  /*
  // poti
  inputAnalog1Value = analogRead(inputAnalog1);
  inputAnalog2Value = analogRead(inputAnalog2);
  inputAnalog3Value = analogRead(inputAnalog3);
  analogWrite(ledBlue, inputAnalog1Value / 4);
  analogWrite(ledGreen, inputAnalog2Value / 4);
  analogWrite(ledRed, inputAnalog3Value / 4);
  */

  // random
  inputAnalog1Value = random(0,255);
  inputAnalog2Value = random(0,255);
  inputAnalog3Value = random(0,255);
  analogWrite(ledBlue, inputAnalog1Value);
  analogWrite(ledGreen, inputAnalog2Value);
  analogWrite(ledRed, inputAnalog3Value);
  delay(500);


  Serial.println("------------");
  Serial.println(inputAnalog1Value);
  Serial.println(inputAnalog2Value);
  Serial.println(inputAnalog3Value);
  
}
