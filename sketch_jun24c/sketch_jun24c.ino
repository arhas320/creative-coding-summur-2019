void setup()
{
  for (int i=2; i<=7; i++)    //通过循环的方式设置2-7号引脚为输出状态
  {
    pinMode(i,OUTPUT);
  }
}
void loop()
{
 for (int x=7; x>=2; x--)
 {
  digitalWrite(x,HIGH);

}
    delay(300);
  for (int x=7; x>=2; x--)   //通过循环的方式依次让每个引脚的led在1秒内完成明灭
  {
     digitalWrite(x,LOW);
    delay(50);
  }
  delay(300);
  for (int x=2; x<=7; x++)   //通过循环的方式依次让每个引脚的led在1秒内完成明灭
  {
     digitalWrite(x,HIGH);
    delay(50);
 
  }
   for (int x=7; x>=2; x--)
   {
  digitalWrite(x,LOW);
   }
   delay(500);
   
 }
