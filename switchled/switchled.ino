int ledpin = 8;
int buttonpin = 12;
int buttonStatus;
int time = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonStatus = digitalRead(buttonpin);
  Serial.println(buttonStatus);
  if(buttonStatus == 0) digitalWrite(ledpin, HIGH);
  else  digitalWrite(ledpin, LOW);

}
