void setup() {
  // put your setup code here, to run once:
 for (int i=9;i<=13;i++)
 {
  pinMode(i,OUTPUT);
 }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x=9;x<=13;x++)
  {
    digitalWrite(x,HIGH);
    delay(500);
    digitalWrite(x,LOW);
    delay(500);
  }

}
