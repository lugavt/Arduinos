int potentiometer=A0;
int readVal;
float v2;
int ledPin = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potentiometer, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(potentiometer);
  v2 = (5./1023.)*readVal;
  Serial.println(v2);
  if(v2 > 2.) digitalWrite(ledPin,HIGH);
  else  digitalWrite(ledPin, LOW);
  
}
