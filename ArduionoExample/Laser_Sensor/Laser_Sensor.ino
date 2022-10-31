int laser_din=A0;
int laser_i=10;
void setup()
{
  pinMode(laser_din,INPUT);
  pinMode(laser_i,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
digitalWrite(laser_i,HIGH);
int sensorValue=analogRead(A0);
float voltage= sensorValue*(5.0/1023.0);

if (voltage>=1.8)
{
   Serial.println("Engel Yok");
  }
  else
  {
    Serial.println("Engel");
  }
  delay(500);
}
