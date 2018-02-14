#include <AFMotor.h>

AF_DCMotor motor(4);

int inputPin1 = 18;
int inputPin2 = 19;
int inputValue1 = 0;
int inputValue2 = 0;
int motor_speed = 0;

void setup() {
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);
  Serial.begin(9600);
  // turn on motor
  motor.setSpeed(200);
  motor.run(RELEASE);
  
}

void loop() {
  inputValue1 = digitalRead(inputPin1);
  inputValue2 = digitalRead(inputPin2);
  
  //Serial.println(inputValue1);
  //Serial.println(inputValue2);
  Serial.println(motor_speed);
  
  // increase speed
  if (inputValue1 == LOW) {
    if(motor_speed<255) {
      motor_speed++;
    } else {
      motor_speed--;
    }
    delay(100);
    motor.run(FORWARD);
    motor.setSpeed(motor_speed);
  } else {
    
  }
  
}
