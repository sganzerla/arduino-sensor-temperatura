#define SENSOR_TMP A0
#define FALANTE 3

// TIPOS DE SENSOR 
#define DHT11 0
#define TMP36 1 

int sensorUtilizado = TMP36;


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
 return convertToCelsius(sensorUtilizado);
}
      
int convertToCelsius(int tipoSensor)
{
switch (tipoSensor)
{
case DHT11:
  return map(analogRead(SENSOR_TMP),0,1023,0,500 );
  break;
case TMP36:
return (-40 + 0.488155 * (analogRead(SENSOR_TMP) - 20));
default:
  return 0;
  break;
} 
}
 