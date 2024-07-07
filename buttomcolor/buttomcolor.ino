 int reader = 12;
int status;
int redPin = 13;
int greenPin = 8;
String msg = "What color would you want?";
String color = "";
String msg2 = "For how long?";
int lightsUp;
int time = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(reader, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  status = digitalRead(reader);
  Serial.println(status);
  //digitalWrite(redPin,HIGH);
  if (status == 0){
    digitalWrite(redPin, LOW);
    digitalWrite(redPin, LOW);
    Serial.println(msg);
    while(!Serial.available()){}
    color = Serial.readStringUntil('\n'); // Read input until newline character
    color.trim(); // Remove any whitespace or newline characters
    Serial.println(color);
  }
  //Serial.println(color);
  if(color == "red"){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin,LOW);
  }
  else if(color == "green"){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  
  //delay(time);
}
