int sensorPin = 2;
int sensorStatus;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  sensorStatus = digitalRead(sensorPin);
  Serial.println(sensorStatus);
  delay(500);
}
