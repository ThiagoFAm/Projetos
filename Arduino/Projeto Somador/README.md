# Computador Primitivo - Somador de 2Bits (Link do Projeto final com a simulação e código no fim da página)
> Os computadores antigamentes eram calculadoras binárias poderosíssimas, como o ENIAC ou IAS. Que formam boa base da computação como conhecemos hoje em dia

## Componentes

1 - Arduino Uno R3  
7 - Led Vermelho  
7 - Resistores de 220 Ohms  
4 - Botões   
4 - Resistores de 10KOhms 

## Como funcionará o projeto?

Basicamente teremos um botão que ditará os estados dos leds, e através dos estados dos leds formaremos nossos números binários. Nesse projeto os botões
são entradas e os leds saídas. 4 leds serão usados para realizarmos a soma, sendo 2 designados um número e outros 2 outro número.  
  
Exemplo: (led1 led2) + (led3 + led4) = (ledBitExcedente, ledBit2, ledBit1) -----> 0 1 + 0 1 = 0 1 0  
                  
>OBS: 0 == desligado e 1 == Ligado.

Aqui deixarei um exemplo de como funciona a parte da interação do botão com os leds que são utilizados na soma (Tanto o código em C++, como também a forma como
os componentes devem estar ligados): https://www.tinkercad.com/things/luGK2g44Wpx  

>OBS: As portas I/O usadas no Arduino UNO R3 não importam por hora, e entenda como funciona o código.

### Somador de 2bits

A ligação dos componentes com as portas digitais do arduino são as seguintes (Quanto a maneira de ligar cada componente no positivo e negativo você pode ver no link que está acima ou no link que deixarei no final deste README.md que é o link do projeto final):  

botões = 12, 10, 8, 6.  
leds da soma = 13, 11, 9, 7.  
leds do resultado = 5, 4, 3.  

LINK DO PROJETO FINAL: https://www.tinkercad.com/things/iBgTi3ulpCg

Este trabalho está bem primitivo por que há várias maneiras de o fazê-lo, porém sou bem iniciante na linguagem C++. Ao abrir o link do projeto final(Ao fim da página) você verá que
o tamanho do código está bem grande, mas não se assuste. O código apenas se repete várias vezes, e o que muda? Apenas as portas digitais nas quais os componentes estáo ligados
isso poderia ter sido resolvido com um "for", porém este trabalho ainda é o primeiro de muitos e ainda está bem raso.

Se tiver alguma dúvida de como este trabalho funciona manda-me uma mensagem:  
-> Instagram = https://www.instagram.com/_thfa._/  
-> Email = thiagoamaraldv@gmail.com ou thiagofamaral@icloud.com

Thiago Amaral 🍕

