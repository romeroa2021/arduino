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
  leftWheel.write(90);
  rightWheel.write(0); 
}

void rightTurn() {
  leftWheel.write(180);
  rightWheel.write(90);
}

void loop() {
  forward();
  leftTurn();
  leftTurn();
  forward();
  cease();
  /*leftTurn();
  delay(1000);
  forward();
  delay(1000);
  rightTurn(); */
}
