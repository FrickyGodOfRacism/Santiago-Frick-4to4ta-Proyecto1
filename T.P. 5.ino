void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  
  for (int x = 0; x <= 255; x++){
    analogWrite(6, x);
    delay(100);
   for (int z = 0; z <= 255; z++){
     analogWrite(5, z);
     delay(100);
   for (int y = 0; y <= 255; y++){
     analogWrite(3, y);
     delay(100);
      }
    }
  }
}