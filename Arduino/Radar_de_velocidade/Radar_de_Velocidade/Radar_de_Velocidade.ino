#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define pinLdrA A0
#define pinLdrB A1
#define THRESHOLD 500

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
  int leituraLdrA = analogRead(pinLdrA);
  int leituraLdrB = analogRead(pinLdrB);
  
  lcd.print("Radar no arduino");
  delay(500);
  lcd.clear();
  

  switch (momento) {
    case 0:
      if (leituraLdrA <= THRESHOLD) {
        tempoInicial = millis();
        momento = 1;
      } 
      else if (leituraLdrB <= THRESHOLD) {
        tempoFinal = millis();
        momento = 2;
      }
      break;

    case 1:
      if (leituraLdrB <= THRESHOLD) {
        tempoFinal = millis();
        
        float tempo = (tempoFinal - tempoInicial) / 1000.0;
        float velocidade = distancia / tempo;
        
        lcd.clear();
        lcd.print(velocidade);
        delay(4000);
        lcd.clear();

        momento = 0;
      }
      break;

    case 2:
      if (leituraLdrA <= THRESHOLD) {
        
        tempoInicial = millis();
        
        float tempo = (tempoInicial - tempoFinal) / 1000.0; 
        float velocidade = -distancia / tempo; 
        
        lcd.clear();
        lcd.print(velocidade);
        delay(4000);
        lcd.clear();

        momento = 0;
      }
      break;
  }
}