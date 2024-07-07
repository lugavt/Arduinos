int led1 = 10;
int led1Status = 0;
int led2 = 11;
int led2Status = 0;
int led3 = 12;
int led3Status = 0;
int led4 = 13;
int led4Status = 0;
int second = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  while(1){
    delay(2*second);
    
    //pin4
    if(digitalRead(led1)== HIGH && digitalRead(led2) == HIGH && digitalRead(led3) == HIGH && digitalRead(led4) == HIGH) digitalWrite(led4, LOW);
    else if(digitalRead(led1) == HIGH && digitalRead(led2) == HIGH && digitalRead(led3) == HIGH && digitalRead(led4) == LOW) digitalWrite(led4, HIGH);

    
    // pin 3
    if(digitalRead(led1)== HIGH && digitalRead(led2) == HIGH && digitalRead(led3) == LOW) digitalWrite(led3, HIGH);
    else if(digitalRead(led1) == HIGH && digitalRead(led2) == HIGH && digitalRead(led3) == HIGH) digitalWrite(led3, LOW);

    // pin 2
    if(digitalRead(led1) == HIGH && digitalRead(led2) == LOW) digitalWrite(led2, HIGH);
    else if(digitalRead(led1) == HIGH && digitalRead(led2) == HIGH) digitalWrite(led2, LOW);
    //pin1
    if(digitalRead(led1) == LOW)  digitalWrite(led1, HIGH);
    else  digitalWrite(led1, LOW);
  }


}
