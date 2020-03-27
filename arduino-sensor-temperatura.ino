#include "DHT.h"
#include <LiquidCrystal.h> //Carrega a biblioteca LiquidCrystal nativa na IDE

#define MOTOR_PIN 13
#define DHT_PIN 8

// descomentar se for utilizar outro modelo do sensor
#define DHTTYPE DHT11 // DHT 11
// #define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
// #define DHTTYPE DHT21   // DHT 21 (AM2301

DHT dht(DHT_PIN, DHTTYPE);
uint32_t timer = 0;

//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  setandoPinos();
  
  Serial.begin(9600); // Inicializa serial com taxa de transmissão de 9600 bauds
}

void loop()
{
  // Executa 1 vez a cada 2 segundos
  if (millis() - timer >= 2000)
  {

    // Reading temperature or humidity takes about 250 milliseconds!
    // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
    float h = dht.readHumidity();
    // Read temperature as Celsius (the default)
    float t = dht.readTemperature();
    // Read temperature as Fahrenheit (isFahrenheit = true)
    float f = dht.readTemperature(true);

    // Check if any reads failed and exit early (to try again).
    if (isnan(h) || isnan(t) || isnan(f))
    {
      Serial.println(F("Failed to read from DHT sensor!"));
      return;
    }

    // Compute heat index in Fahrenheit (the default)
    float hif = dht.computeHeatIndex(f, h);
    // Compute heat index in Celsius (isFahreheit = false)
    float hic = dht.computeHeatIndex(t, h, false);

    Serial.print(F("Humidity: "));
    Serial.print(h);
    Serial.print(F("%  Temperature: "));
    Serial.print(t);
    Serial.print(F("°C "));
    Serial.print(f);
    Serial.print(F("°F  Heat index: "));
    Serial.print(hic);
    Serial.print(F("°C "));
    Serial.print(hif);
    Serial.println(F("°F"));

    // Exibe no display LCD o valor da humidade
    lcd.setCursor(0, 0); // Define o cursor na posição de início
    lcd.print("Humd. = ");
    lcd.print(h);
    lcd.print("%");

    // Exibe no display LCD o valor da temperatura
    lcd.setCursor(0, 1); // Define o cursor na posição de início
    lcd.print("Temp. = ");
    lcd.print(t);
    lcd.write(B11011111); // Imprime o símbolo de grau
    lcd.print("C");

    digitalWrite(MOTOR_PIN, t > 29.7 ? HIGH : LOW);

    timer = millis(); // Atualiza a referência
  }

  void setandoPinos()
  {
    pinMode(MOTOR_PIN, OUTPUT);
    lcd.begin(16, 2); // Define o display com 16 colunas e 2 linhas
    lcd.clear();      // limpa a tela do display

    dht.begin(); // Inicializa  a leitura com o sensor de temperatura e umidade
  }
}
