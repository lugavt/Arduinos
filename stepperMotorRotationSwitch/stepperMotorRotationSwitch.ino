#include <Stepper.h>
int stepsPerRevolution = 2048;
int motSpeed = 10; //rpm
int direction = 1;
int dt = 100;
int buttonPin = 2;
int buttonValue;

Stepper myStepper(stepsPerRevolution, 8,10,9,11);

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  myStepper.setSpeed(motSpeed);
}

void loop() {
  buttonValue = digitalRead(buttonPin);
  Serial.println(buttonValue);
  if(!buttonValue){
    Serial.println("new direction");
    if(direction == 1)  direction = -1;
    else  direction = 1;
  }

  myStepper.step(direction);
}
