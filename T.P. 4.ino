void setup()
{
	pinMode(10, INPUT);
	pinMode(2, OUTPUT);
  	pinMode(7, OUTPUT);
  	pinMode(6, OUTPUT);
  	Serial.begin(9600);
}

void loop()
{
  int EstadoSensor = digitalRead(10);
  Serial.println(EstadoSensor);
  if (EstadoSensor == HIGH){
    digitalWrite(6, LOW);
  	digitalWrite(7, HIGH);
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    digitalWrite(2, LOW);
    delay(500);
  }else{
    digitalWrite(7, LOW);
    digitalWrite(2, LOW);
    digitalWrite(6, HIGH);
  }
}