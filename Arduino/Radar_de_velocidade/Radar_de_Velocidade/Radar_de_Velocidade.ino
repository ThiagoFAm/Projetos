//Bibliotecas
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Pinos e Constantes
#define pinLdrA A0
#define pinLdrB A1
#define THRESHOLD 500

LiquidCrystal_I2C lcd(0x27, 16, 2);

int momento = 0;
unsigned long tempoInicial;
unsigned long tempoFinal;

// Distância entre os sensores (em centímetros)
float distancia = 10.0;

void setup() {
  
  pinMode(pinLdrA, INPUT);
  pinMode(pinLdrB, INPUT);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
}

void loop() {
  //Inicia leitura dos dados do sensor
  int leituraLdrA = analogRead(pinLdrA);
  int leituraLdrB = analogRead(pinLdrB);

  //Caso 0 define o sentido em que o movel se desloca:
  switch (momento) {

    case 0:
      // Direita para a esquerda
      if (leituraLdrA <= THRESHOLD) {
        //Inicia contagem Inicial
        tempoInicial = millis();
        //Troca de momento
        momento = 1;
      } 
      //Esquerda para a direita
      else if (leituraLdrB <= THRESHOLD) {
        //Inicia contagem Inicial  
        tempoFinal = millis();
        //Troca de momento
        momento = 2;
      }
      break;
    //direita | Sentido: +
    case 1:
      if (leituraLdrB <= THRESHOLD) {
        //Inicia a contagem final
        tempoFinal = millis();
        
        // tempo = deltaT | velocidade = velocidade media = S/deltaT 
        float tempo = (tempoFinal - tempoInicial) / 1000.0;
        float velocidade = distancia / tempo;
        
        //Exibi os dados processados no lcd
        lcd.print(velocidade);
        delay(4000);
        lcd.clear();

        //Finaliza o processo e volta ao caso 0
        momento = 0;
      }
      break;
    //Esquerda | Sentido: -
    case 2:
      if (leituraLdrA <= THRESHOLD) {
        //INicia contagem inicial
        tempoInicial = millis();
        
        // tempo = deltaT | velocidade = velocidade media = S/deltaT
        //Obs: distancia esta negativa por que o movel se move para a esuqerda
        float tempo = (tempoInicial - tempoFinal) / 1000.0; 
        float velocidade = -distancia / tempo; 
        
        //Exibi os dados processados no display
        lcd.print(velocidade);
        delay(4000);
        lcd.clear();

        //Finaliza e volta ao caso 0
        momento = 0;
      }
      break;
  }
}