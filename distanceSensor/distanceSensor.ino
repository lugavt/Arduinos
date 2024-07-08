int triggerPin = 12;
int echoPin = 11;
int ping;
int distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(20);
  digitalWrite(triggerPin,LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  ping = pulseIn(echoPin, HIGH);
  distance = 343.*100.*(ping/2.)*0.000001;
  Serial.print(0);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(",");
  Serial.println(50);
  
}
