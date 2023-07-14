void setup()
{
  pinMode(10,OUTPUT);
}
void loop()
{
  for(int i=0;i<=255;i=i+2)
  {
    analogWrite(10,i);
    delay(15);
    
    
  }
  for(int i=255;i>=0;i=i-2)
  {
     analogWrite(10,i);
    delay(15);
  }
}