void setup()
{
  pinMode(2,LOW);
  pinMode(3,HIGH);
  pinMode(4,LOW);
  
}

void loop()
{
  digitalWrite(2,HIGH);
  delay(3000);
  digitalWrite(2,LOW);
  digitalWrite(3, HIGH);
  delay(3000);
  digitalWrite(3, LOW);
  digitalWrite(4,HIGH);
  delay(5000);
  digitalWrite(4,LOW);
}
