int xPin = A0;
int yPin = A1;
int switchPin = 2;
int xVal, yVal, switchVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
}

void loop() {
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  switchVal = digitalRead(switchPin);
  Serial.print("x value = ");
  Serial.print(xVal);
  Serial.print(" y value = ");
  Serial.print(yVal);
  Serial.print(" switch value = ");
  Serial.println(switchVal);
  delay(1000);
}
