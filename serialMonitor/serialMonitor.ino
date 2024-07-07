int number;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(750);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("hello");
  while(Serial.available() == 0){}
  number = Serial.parseInt();
  Serial.println(number);
}
