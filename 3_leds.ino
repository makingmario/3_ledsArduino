void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);
pinMode(10, OUTPUT);
pinMode(8, OUTPUT);

digitalWrite(8,LOW);
digitalWrite(10,LOW);
digitalWrite(12,LOW);

}

void loop() 
{
  // put your main code here, to run repeatedly:
for(int i = 8; i<=12; i=i+2)
{
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
  delay(100);
  }
}
