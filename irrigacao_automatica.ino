const int sensorPin = A0;
const int relePin = 7;

int valorSensor = 0;
int limiteSeco = 400;

void setup(){
  pinMode(relePin, OUTPUT);
  digitalWrite(relePin, HIGH);
}

void loop(){
  valorSensor = analogRead(sensorPin);
  
  if(valorSensor > limiteSeco){
    digitalWrite(relePin, LOW);
  }else{
    digitalWrite(relePin, HIGH);
  }
  delay(2000);
}