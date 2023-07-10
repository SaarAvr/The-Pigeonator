#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution for your motor

Stepper myStepper1(stepsPerRevolution, 8, 9, 10, 11);  // initialize the stepper library on pins 8 through 11
Stepper myStepper2(stepsPerRevolution, 4, 5, 6, 7);


void setup() {
  myStepper1.setSpeed(60);  // set the speed at 60 rpm
  myStepper2.setSpeed(60);  // set the speed at 60 rpm
  Serial.begin(9600);  // initialize the serial port
  Serial.println("Commands: l - Move Left | r - Move Right | s - Stop");
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read();

    switch (command) {
      case 'a':
        Serial.println("left");
        myStepper1.step(20);
        break;
      case 'd':
        Serial.println("right");
        myStepper1.step(-20);
        break;
      case 'w':
        Serial.println("up");
        myStepper2.step(-20);
        break;
      case 'x':
        Serial.println("down");
        myStepper2.step(20);
        break;
      case 'q':
        Serial.println("left-up");
        myStepper1.step(20);
        myStepper2.step(-20);
        break;
      case 'e':
        Serial.println("right-up");
        myStepper1.step(-20);
        myStepper2.step(-20);
        break;
      case 'c':
        Serial.println("right-down");
        myStepper1.step(-20);
        myStepper2.step(20);
        break;
      case 'z':
        Serial.println("left-down");
        myStepper1.step(20);
        myStepper2.step(20);
        break;
      case 's':
        Serial.println("Stopping");
        myStepper1.step(0);
        break;
      default:
        Serial.println("Invalid command");
        break;
    }
  }
}