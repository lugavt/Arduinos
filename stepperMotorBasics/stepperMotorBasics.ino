#include <Stepper.h>

int stepsPerRevolution = 2048;
int motSpeed = 5;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
}

void loop() {
  myStepper.step(stepsPerRevolution);
  delay(dt);
  myStepper.step(-stepsPerRevolution);
  delay(dt);
}
