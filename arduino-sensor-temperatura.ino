#define SENSOR_TMP A0
#define FALANTE 3

void setup()
{
  pinMode(FALANTE, OUTPUT);
  pinMode(SENSOR_TMP, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Temperatura: ");
  Serial.println(getTemperatura());
  if (getTemperatura() > 28)
  {
    tone(FALANTE, 440,1000);
  } else {
   noTone(FALANTE); 
  }
  delay(10);     
 
}

      
int getTemperatura()
{
 return convertToCelsius();
}
      
int convertToCelsius()
{
  return (-40 + 0.488155 * (analogRead(SENSOR_TMP) - 20));
}