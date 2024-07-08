int motionPin = 2, motionStatus;
int redPin = 8, greenPin = 9, bluePin = 10;
int buzzerPin = 11;
int button = 3;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(motionPin, INPUT);
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);
  delay(500);
}

void loop() {
  digitalWrite(greenPin, HIGH);
  motionStatus = digitalRead(motionPin);
  if(motionStatus){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    while(digitalRead(button)){}
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(3000);
  }
}
