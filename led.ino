
int ledPin = 11
void setup() 
{
  pinMode (ledPin,OUTPUT);
}

void loop() 
{
  pinWrite(ledPin,HIGH);
  delay(1000);
  pinWrite(ledPin,LOW);
  delay(1000);

}
