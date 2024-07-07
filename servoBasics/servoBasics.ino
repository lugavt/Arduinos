#include <Servo.h>
int servoPin = 9;
int servoPosition = 0;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(servoPin, OUTPUT);
  myServo.attach(servoPin); //attaching object servo to arduino
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What angle?");
  while(!Serial.available()){}
  servoPosition = Serial.parseInt();
  myServo.write(servoPosition);
  delay(1000);
}
