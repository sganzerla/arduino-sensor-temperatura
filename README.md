# arduino-sensor-temperatura
 
Circuito simples que detecta temperatura e humidade de ambiente utilizando sensor DHT11, DHT21 ou DHT22.

### Controlar relé com aumento ou diminuição da intensidade de luz ambiente(simulação) (vídeo)
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://youtu.be/Uq1nWzP8aSo" >
  <img src="https://user-images.githubusercontent.com/22710963/76115701-6a040380-5fc7-11ea-937f-1ce134e0a05c.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Software necessário

- [IDE Arduino](https://www.arduino.cc/en/Main/Software)
- [Documentação sintaxe C++](https://www.arduino.cc/reference/en/)

### Software p/ gerar esquemas de circuitos elétricos 

- Útil para documentar projetos

- Versão paga [Fritzing](https://fritzing.org/home/)

- Versão gratuita (permite que seja atualizada) [Fritzing](https://softfamous.com/fritzing/download/)

## Hardware necessário
```
- a) 1 Placa Arduino com cabo USB
- b) 1 Resistor 220Ω ou 300Ω 
- c) 1 Led colorido  
- d) 1 Protoboard
- e) 20 Cabos de conexão
- f) 1 Sensor de temperatura e humidade DHT11, DHT21 ou DHT22
```

 ### a) Placa Arduino com cabo USB
 Porta de 5V e 40mA
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png" alt="reset" style="max-width:100%;"></a></p> 

 ### b) Resistores  
 Servem para diminuir a tensão.
 
 <p>O de 300Ω instalado entre o negativo do LED e a conexão com GND do Arduino.</p>
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png">
  <img src="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png" alt="reset" style="max-width:100%;"></a></p> 
  
  ### c) LEDS comuns de 4mm
  Diodo com 2V e 15mA, perna maior ligada no positivo
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### d) Protoboard 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png" alt="reset" style="max-width:100%;"></a></p> 

  ### e) Cabos de conexão
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png">
  <img src="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png" alt="reset" style="max-width:100%;"></a></p>     
  
  ### f) Sensor de temperatura e humidade DHT11, DHT21 ou DHT22
  Não possui lado de polaridade fixo.
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76045914-34b2d380-5f3d-11ea-94bf-a2a1a03f8bb1.png">
  <img src="https://user-images.githubusercontent.com/22710963/76045914-34b2d380-5f3d-11ea-94bf-a2a1a03f8bb1.png" alt="reset" style="max-width:100%;"></a></p> 

   
## Instalação dos Leds
Perna maior do LED é ligado no positivo e a perna menor precisa de um resistor de 220 ou 330 Ohm entre a ligação com o GND (negativo)
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png">
  <img src="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png" alt="reset" style="max-width:100%;"></a></p> 
  
  ## Fórmula Lei de Ohm
  V = R * I
  
 > O "I" significa a intensidade da corrente elétrica, no entanto, muitas vezes se fala apenas da corrente elétrica (sem a palavra intensidade). Quando existe uma diferença de potencial elétrico entre componentes (polarizado) acontece um fluxo de partículas que equilibra o campo elétrico. Esse fluxo é a corrente elétrica.
 
> A corrente elétrica é medida em Ampere (A) que nada mais é do que a quantidade de elétrons que passa nesse fio em um tempo determinado!

> A tensão elétrica (V) é medida em Volts (V) (em homenagem ao físico Alessandro Volta).

> A resistência (R) é medida em Ohm (Ω) e a intensidade da corrente elétrica (I) em Ampere (A).

> A relação entre tensão, resistência e intensidade da corrente define a Lei de Ohm: V = R * I

> Para calcular a corrente: I = V / R

> Para calcular a resistência: R = V / I

> Para calcular a tensão: V = R * I

### Tabela de Cores dos resistores na convenção internacional
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png">
  <img src="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Circuito
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76116853-6ec9b700-5fc9-11ea-97e8-b27dcc22919d.png">
  <img src="https://user-images.githubusercontent.com/22710963/76116853-6ec9b700-5fc9-11ea-97e8-b27dcc22919d.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Links úteis
> [Manual do mundo](https://www.youtube.com/watch?v=vEdYjAbzrAE&list=PLYjrJH3e_wDPwKigz0AcIgzk9BF4lqDuy)
> [Adafruit DHT](https://github.com/adafruit/DHT-sensor-library)

###  Aplicações
<p> Termômetro digital de ambientes </p>
<p> Monitorar temperatura do quarto e fazer alarme quando estiver muito baixa de madrugada </p>
<p> Estufas de hortaliças se estiver muito quente irrigar as plantas ou cobrir com sombrero </p>