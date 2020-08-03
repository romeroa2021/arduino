#include <Servo.h>

Servo leftWheel, rightWheel;
int leftWheelPin = 13, rightWheelPin = 12;

void setup() {
  leftWheel.attach(leftWheelPin);
  leftWheel.write(90);
  rightWheel.attach(rightWheelPin);
  rightWheel.write(90);
}

void forward() {
  leftWheel.write(180);
  rightWheel.write(0);
}

void backwards() {
  leftWheel.write(0);
  rightWheel.write(180);
}

void cease() {
  leftWheel.write(90);
  rightWheel.write(90);
}

void leftTurn() {
  //leftWheel.write(90);
  //rightWheel.write(0); 
  leftWheel.write(90);
  rightWheel.write(30);
}

void rightTurn() {
  leftWheel.write(180);
  rightWheel.write(90);
}

void howManyTurns(int j) {
  for (int i = 0; i < j; i++) {
    leftTurn();
    delay(800);
    forward();
    delay(2000);
  }
}

void loop() {
  leftTurn();
  delay(800);
  forward();
  delay(2000);
  /*leftTurn();
  delay(1000);
  forward();
  delay(1000);
  rightTurn(); */
}
