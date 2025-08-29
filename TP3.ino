#define R 2
#define G 4
#define B 3
int temp;
int luz;


void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);	
}

void loop()
{
 luz = analogRead(A0);
 temp = analogRead(A1);
 int celsius = map(((temp - 20) * 3.04), 0, 1023, -40, 125);
  luz=map(luz, 712, 1022, 0, 255);
  if(76 < luz && luz < 176){  
  if (celsius >= 90){
   digitalWrite(R, HIGH);
   digitalWrite(G, LOW); 
   digitalWrite(B, LOW);
   Serial.print("El nivel de luz actual es: ");
   Serial.println(luz);
   Serial.print("La temperatura actual: ");
   Serial.println(celsius);

}
  else if (18 <= celsius){
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
  	Serial.print("El nivel de luz actual es: ");
    Serial.println(luz);
    Serial.print("La temperatura actual: ");
    Serial.println(celsius);

  }
  else{
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    Serial.print("El nivel de luz actual es: ");
    Serial.println(luz);
    Serial.print("La temperatura actual: ");
    Serial.println(celsius);

  }
  }
    else{
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    }
 }

   
   
