#include <DHT.h>
#define Type DHT11

int sensePin = 2;
DHT HT(sensePin, Type);
float humidity, tempC;
int setTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensePin, INPUT);
  HT.begin();
  delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  Serial.print("humidity is: ");
  Serial.println(humidity);
  tempC = HT.readTemperature();
  Serial.print("temperature is: ");
  Serial.println(tempC);
  delay(1000);

}
