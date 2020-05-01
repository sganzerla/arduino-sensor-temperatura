
# arduino-sensor-temperatura

## Objetivo

Circuito simples que detecta temperatura e umidade de ambiente utilizando sensor DHT11, DHT21 ou DHT22.

### Vídeo

[![Vídeo](https://user-images.githubusercontent.com/22710963/77712745-76222600-6fb3-11ea-8e81-2688be9c6730.png)](https://youtu.be/QIhPGDA-j7M)

### Circuito

![image](https://user-images.githubusercontent.com/22710963/77713099-4889ac80-6fb4-11ea-9e10-d4328ffca172.png)

### Hardware necessário

```
- a) 1 Placa Arduino com cabo USB
- b) 1 Sensor de temperatura e umidade DHT11
- c) 1 Protoboard
- d) 4-6 Cabos de conexão ( com display são mais ou menos uns 20)
- e) Display LCD 16X2 (opcional) + Potenciometro Linear 500k (opcional)
- f) Motor 5v (opcional)
```

#### a) Placa Arduino Uno

![image](https://user-images.githubusercontent.com/22710963/77551422-16cbf500-6e91-11ea-850d-7e3989c9f1f2.png)

#### b) Sensor de temperatura e umidade DHT11
  
![image](https://user-images.githubusercontent.com/22710963/77607222-65f94080-6ef8-11ea-8c7d-3c05160d8329.png)

#### c) Protoboard

![image](https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png)

#### d) Cabos de conexão

![image](https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png)

#### e) Display LCD 16X2 e Potenciometro Linear 500k
  
Atenção os pinos devem estar soldados no display senão não funciona.

![image](https://user-images.githubusercontent.com/22710963/77712613-0d3aae00-6fb3-11ea-892b-0d5e8753b394.png)

![image](https://user-images.githubusercontent.com/22710963/77713295-c1890400-6fb4-11ea-87e0-9f36d23c9042.png)

#### f) Motor 5v

![image](https://user-images.githubusercontent.com/22710963/77712402-5fc79a80-6fb2-11ea-9dac-11af67f2e244.png)

### Configuração

  Para usar outro tipo de sensor do tipo DHT basta definir o modelo descomentando a outra opção nas linhas abaixo:
  ```
     #define DHTTYPE DHT11   // DHT 11
   //#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
   //#define DHTTYPE DHT21   // DHT 21 (AM2301)
 ```

### Links úteis

- [Adafruit DHT](https://github.com/adafruit/DHT-sensor-library)

- [Squids](http://www.squids.com.br/arduino/index.php/projetos-arduino/projetos-squids/basico/149-projeto-40-utilizando-um-sensor-de-temperatura-e-umidade-dht11-com-display-lcd)

### Aplicações

- Indicador de temperatura e umidade digital de ambientes

- Ligar/desligar equipamentos automaticamente conforme temperatura pré-determinada (Ex: ar condicionado)

- Ligar/desligar borrifador de água automaticamente quando umidade do ar for muito baixa
