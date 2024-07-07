#include <Servo.h>
Servo myServo;
int photoResistor = A0;
int photoResistorValue;
int servoPosition;
int servoPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(photoResistor, INPUT);
  myServo.attach(servoPin);
}

void loop() {
  delay(1000);
  photoResistorValue = analogRead(photoResistor);
  Serial.println(photoResistorValue);
  servoPosition = photoResistorValue*0.18; //constant value due to line inclination
  myServo.write(servoPosition);
}
 