
# arduino-sensor-temperatura
 
Circuito simples que detecta temperatura e umidade de ambiente utilizando sensor DHT11, DHT21 ou DHT22.

### Monitorando temperatura e umidade (vídeo)
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://youtu.be/QIhPGDA-j7M" target="_blank">
  <img src="https://user-images.githubusercontent.com/22710963/77712745-76222600-6fb3-11ea-8e81-2688be9c6730.png" alt="reset" style="max-width:100%;"></a>
</p> 

 ### Circuito
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76156407-dae71080-60d8-11ea-9cc2-4bc1377d2f05.png">
  <img src="https://user-images.githubusercontent.com/22710963/76156407-dae71080-60d8-11ea-9cc2-4bc1377d2f05.png" alt="reset" style="max-width:100%;"></a>
</p>  
   
## Hardware necessário
```
- a) 1 Placa Arduino com cabo USB
- b) 1 Sensor de temperatura e umidade DHT11
- c) 1 Protoboard
- d) 4-6 Cabos de conexão 
- e) Display LCD 16X2 (opcional)
- f) Motor 5v (opcional)
```

 ### a) Placa Arduino Uno 
 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77551422-16cbf500-6e91-11ea-850d-7e3989c9f1f2.png">
  <img src="https://user-images.githubusercontent.com/22710963/77551422-16cbf500-6e91-11ea-850d-7e3989c9f1f2.png" alt="reset" style="max-width:100%;"></a></p> 

  ### b) Sensor de temperatura e umidade DHT11
  
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77607222-65f94080-6ef8-11ea-8c7d-3c05160d8329.png">
  <img src="https://user-images.githubusercontent.com/22710963/77607222-65f94080-6ef8-11ea-8c7d-3c05160d8329.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### c) Protoboard 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png" alt="reset" style="max-width:100%;"></a></p> 

  ### d) Cabos de conexão
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png" alt="reset" style="max-width:100%;"></a></p>     
  
  ### e) Display LCD 16X2
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77712613-0d3aae00-6fb3-11ea-892b-0d5e8753b394.png">
  <img src="https://user-images.githubusercontent.com/22710963/77712613-0d3aae00-6fb3-11ea-892b-0d5e8753b394.png" alt="reset" style="max-width:100%;"></a></p>     
  
  ### f) Motor 5v
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77712402-5fc79a80-6fb2-11ea-9dac-11af67f2e244.png">
  <img src="https://user-images.githubusercontent.com/22710963/77712402-5fc79a80-6fb2-11ea-9dac-11af67f2e244.png" alt="reset" style="max-width:100%;"></a></p>     
  


### Configuração

  Para usar outro tipo de sensor do tipo DHT basta definir o modelo descomentando a outra opção nas linhas abaixo:
  ```
     #define DHTTYPE DHT11   // DHT 11
   //#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
   //#define DHTTYPE DHT21   // DHT 21 (AM2301)
 ```
 
### Importando biblioteca AdaFruit DTH
   
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76156693-bc831400-60dc-11ea-9fe8-2a4e9a9476f4.png">
  <img src="https://user-images.githubusercontent.com/22710963/76156693-bc831400-60dc-11ea-9fe8-2a4e9a9476f4.png" alt="reset" style="max-width:100%;"></a></p> 


### Links úteis

- [IDE Arduino](https://www.arduino.cc/en/Main/Software)
 
- [Documentação sintaxe C++](https://www.arduino.cc/reference/en/)

- [Fritzing](https://fritzing.org/home/) - Licença comercial

- [Fritzing](https://softfamous.com/fritzing/download/) - Versão gratuita (antiga mas permite que seja atualizada)

- [TinkerCad](https://www.tinkercad.com) - Ambiente Virtual p/ prototipagem
 
- [Adafruit DHT](https://github.com/adafruit/DHT-sensor-library)

- [Squids](http://www.squids.com.br/arduino/index.php/projetos-arduino/projetos-squids/basico/149-projeto-40-utilizando-um-sensor-de-temperatura-e-umidade-dht11-com-display-lcd)
 
###  Aplicações
 
 - Indicador de temperatura e umidade digital de ambientes
 
 - Ligar/desligar equipamentos automaticamente conforme temperatura pré-determinada (Ex: ar condicionado)
 
 - Ligar/desligar borrifador de água automaticamente quando umidade do ar for muito baixa
  
  
 

