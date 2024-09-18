int sensorPin=0;
int buzzer=5;
int sensorValue=0; 
void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  sensorValue=digitalRead(sensorPin);
  digitalWrite(buzzer,HIGH);
  if(sensorValue==LOW)
  {
    digitalWrite(buzzer,LOW);
  }
  else
  {
    digitalWrite(buzzer,HIGH);
  }
  delay(1000);
}
