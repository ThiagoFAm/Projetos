# Projeto de Radar de Velocidade com Arduino

## Componentes

- Arduino Uno R3
- Sensores de Luminosidade (2 unidades, conectados aos pinos analógicos 0 e 1)
- Display LCD 16x2 com Módulo de Comunicação I2C
- Resistores de 10k Ohms (conectados em série com os sensores de luminosidade)
- Fios de Conexão
- Canetinhas lasers (também conhecidas por "lasers de chaveiro", 2 unidades)

## Introdução

Neste projeto, construiremos um Radar de Velocidade utilizando sensores de luminosidade e lasers de chaveiro. O objetivo é medir a velocidade média de um objeto em movimento. Quando o objeto interrompe a linha de laser entre os sensores, registramos o tempo que leva para o objeto atravessar a distância entre os sensores. Em seguida, usamos a fórmula da velocidade média para calcular a velocidade do objeto.

## Funcionamento

O funcionamento do radar de velocidade é baseado na detecção da interrupção da linha de laser pelos sensores de luminosidade. Aqui está como o processo funciona:

1. O objeto em movimento interrompe a linha de laser entre o primeiro sensor e o segundo sensor.

2. O sensor de luminosidade conectado ao pino analógico 0 detecta a interrupção.

3. Registramos o tempo que leva para o objeto se mover da posição do primeiro sensor para a posição do segundo sensor.

4. Com base no tempo registrado e na distância entre os sensores, calculamos a velocidade média do objeto usando a fórmula da velocidade média.

## Montagem do Circuito

### Conexões do Arduino

- Sensor de Luminosidade (Pino analógico 0): Conectado à porta analógica 0 do Arduino com um resistor de 10k Ohms em série.
- Sensor de Luminosidade (Pino analógico 1): Conectado à porta analógica 1 do Arduino com um resistor de 10k Ohms em série.
- Display LCD 16x2: Conectado ao Arduino usando o módulo de comunicação I2C.
- Resistores de 10k Ohms: Conectados em série com os sensores de luminosidade para ajustar a sensibilidade.
- Fios de Conexão.

Certifique-se de conectar os componentes de acordo com as especificações acima para garantir o funcionamento adequado do projeto.

## Código Fonte

O código fonte para este projeto está disponível [aqui no GitHub](https://github.com/ThiagoFAm/Projetos/blob/master/Arduino/Radar_de_velocidade/Radar_de_Velocidade/Radar_de_Velocidade.ino). Além disso, para uma demonstração interativa do projeto, clique [aqui no Tinkercad](https://www.tinkercad.com/things/l0LDIQE63Vn?sharecode=GEUsP7BcCnNDfxjphpmitZeAzq2UCt6vqMF9RKsIUnU).

## Contato

Se você tiver dúvidas sobre como este projeto funciona ou precisar de mais informações, sinta-se à vontade para entrar em contato:

- Instagram: [thiago.zipp](https://www.instagram.com/thiago.zipp/)
- Email: thiagoamaraldv@gmail.com

Este projeto oferece uma ótima oportunidade para aprender sobre sensores, eletrônica e cálculo de velocidade média. Divirta-se construindo o seu próprio radar de velocidade!

Thiago Amaral🍕
