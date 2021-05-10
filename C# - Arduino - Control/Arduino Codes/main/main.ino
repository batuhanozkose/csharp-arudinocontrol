void setup() {
  pinMode(8, OUTPUT);
   //discordtr.org
  Serial.begin(9600);
   //discordtr.org
}

 //discordtr.org
void loop()
{
   //discordtr.org
  if(Serial.available())
   //discordtr.org
  {
    char c = Serial.read();
    if(c == '1')
    {
      digitalWrite(8,HIGH);
       //discordtr.org
      Serial.println("Led Yandı");
    }
    else if(c == '0')  //discordtr.org
    {
      digitalWrite(8,LOW);
       //discordtr.org
      Serial.println("Led Söndü");
       //discordtr.org
    }
  }
   //discordtr.org
}
