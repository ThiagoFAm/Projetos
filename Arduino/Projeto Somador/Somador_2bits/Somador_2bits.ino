int led = 13; 
int buttom = 12;
int stateButtom = 0; //Inicia OFF
int flagButtom = 0;  // Var comparativa condicional .Inicia OFF
bool stateLed = 0;    // Var comparativa condicional .Inicia OFF

int led_2 = 11; 
int buttom_2 = 10;
int stateButtom_2 = 0; //Inicia OFF
int flagButtom_2 = 0;  // Var comparativa condicional .Inicia OFF
bool stateLed_2 = 0;    // Var comparativa condicional .Inicia OFF

int led_3 = 9; 
int buttom_3 = 8;
int stateButtom_3 = 0; //Inicia OFF
int flagButtom_3 = 0;  // Var comparativa condicional .Inicia OFF
bool stateLed_3 = 0;    // Var comparativa condicional .Inicia OFF

int led_4 = 7; 
int buttom_4 = 6;
int stateButtom_4 = 0; //Inicia OFF
int flagButtom_4 = 0;  // Var comparativa condicional .Inicia OFF
bool stateLed_4 = 0;    // Var comparativa condicional .Inicia OFF

int ledBit = 3;
int ledBit2 = 4;
int ledBit3 = 5;



void setup() {
  pinMode(led, OUTPUT); //led == Saída
  pinMode(buttom, INPUT); //botao == Entrada
  pinMode(led_2, OUTPUT); //led == Saída
  pinMode(buttom_2, INPUT); //botao == Entrada
  pinMode(led_3, OUTPUT); //led == Saída
  pinMode(buttom_3, INPUT); //botao == Entrada
  pinMode(led_4, OUTPUT); //led == Saída
  pinMode(buttom_4, INPUT); //botao == Entrada
  pinMode(ledBit, OUTPUT); //saida do bit
  pinMode(ledBit2, OUTPUT); //saida do bit
  pinMode(ledBit3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stateButtom = digitalRead(buttom); //Armazena o estado (0 ou 1) do botão.

  if (stateButtom == 1 && flagButtom == 0)//botão = Pressionado / Var cond. comp == FALSE(ou 0)
    {
      flagButtom = 1; //Var cond. comp == TRUE(1)

      if (stateLed == 0)  //Compara pra checar se o estado do Led é Desligado ou FALSE ou 0
    {
      
        digitalWrite(led, HIGH); // Led que antes estava declarado desligado, é ligado.
        stateLed = 1;} //Se está ligado, redefinimos o estado do led
      

      else if (stateButtom == 1) //Se o botão for pressionado novamente...
    {
        stateLed = 0; //Botão novamente é pressionado, o que significa que havera mudança de estado do led.
        digitalWrite(led, LOW);}} //Se o stateLed volta a sua configuração inicial então o led desliga.
        delay(50);
     //Tempo de troca de estado do led
  if (stateButtom == 0 && flagButtom == 1){ //Quando o botão não estiver pressionado
    flagButtom = 0;//redefine o flagButtom para FALSE
     //Tempo de troca de estado do led
    delay(50);
  }
  stateButtom_2 = digitalRead(buttom_2); //Armazena o estado (0 ou 1) do botão.

  if (stateButtom_2 == 1 && flagButtom_2 == 0)//botão = Pressionado / Var cond. comp == FALSE(ou 0)
    {
      flagButtom_2 = 1; //Var cond. comp == TRUE(1)

      if (stateLed_2 == 0)  //Compara pra checar se o estado do Led é Desligado ou FALSE ou 0
    {
      
        digitalWrite(led_2, HIGH); // Led que antes estava declarado desligado, é ligado.
        stateLed_2 = 1;} //Se está ligado, redefinimos o estado do led
      

      else if (stateButtom_2 == 1) //Se o botão for pressionado novamente...
    {
        stateLed_2 = 0; //Botão novamente é pressionado, o que significa que havera mudança de estado do led.
        digitalWrite(led_2, LOW);}} //Se o stateLed volta a sua configuração inicial então o led desliga.
        delay(50);
     //Tempo de troca de estado do led
  if (stateButtom_2 == 0 && flagButtom_2 == 1){ //Quando o botão não estiver pressionado
    flagButtom_2 = 0;//redefine o flagButtom para FALSE
     //Tempo de troca de estado do led
    delay(50);
  }  // put your main code here, to run repeatedly:
  stateButtom_3 = digitalRead(buttom_3); //Armazena o estado (0 ou 1) do botão.

  if (stateButtom_3 == 1 && flagButtom_3 == 0)//botão = Pressionado / Var cond. comp == FALSE(ou 0)
    {
      flagButtom_3 = 1; //Var cond. comp == TRUE(1)

      if (stateLed_3 == 0)  //Compara pra checar se o estado do Led é Desligado ou FALSE ou 0
    {
      
        digitalWrite(led_3, HIGH); // Led que antes estava declarado desligado, é ligado.
        stateLed_3 = 1;} //Se está ligado, redefinimos o estado do led
    
      else if (stateButtom_3 == 1) //Se o botão for pressionado novamente...
    {
        stateLed_3 = 0; //Botão novamente é pressionado, o que significa que havera mudança de estado do led.
        digitalWrite(led_3, LOW);}} //Se o stateLed volta a sua configuração inicial então o led desliga.
        delay(50);
     //Tempo de troca de estado do led
  if (stateButtom_3 == 0 && flagButtom_3 == 1){ //Quando o botão não estiver pressionado
    flagButtom_3 = 0;//redefine o flagButtom para FALSE
     //Tempo de troca de estado do led
    delay(50);
  }  // put your
  stateButtom_4 = digitalRead(buttom_4); //Armazena o estado (0 ou 1) do botão.

  if (stateButtom_4 == 1 && flagButtom_4 == 0)//botão = Pressionado / Var cond. comp == FALSE(ou 0)
    {
      flagButtom_4 = 1; //Var cond. comp == TRUE(1)

      if (stateLed_4 == 0)  //Compara pra checar se o estado do Led é Desligado ou FALSE ou 0
    {
      
        digitalWrite(led_4, HIGH); // Led que antes estava declarado desligado, é ligado.
        stateLed_4 = 1;} //Se está ligado, redefinimos o estado do led
      

      else if (stateButtom_4 == 1) //Se o botão for pressionado novamente...
    {
        stateLed_4 = 0; //Botão novamente é pressionado, o que significa que havera mudança de estado do led.
        digitalWrite(led_4, LOW);}} //Se o stateLed volta a sua configuração inicial então o led desliga.
        delay(50);
     //Tempo de troca de estado do led
  if (stateButtom_4 == 0 && flagButtom_4 == 1){ //Quando o botão não estiver pressionado
    flagButtom_4 = 0;//redefine o flagButtom para FALSE
     //Tempo de troca de estado do led
    delay(50);
  }  // put your
  stateLed = digitalRead(led);
  stateLed_2 = digitalRead(led_2);
  stateLed_3 = digitalRead(led_3);
  stateLed_4 = digitalRead(led_4);

  if(stateLed == 0 && stateLed_2 == 1 && stateLed_3 == 0 && stateLed_4 == 0 ||  stateLed == 0 && stateLed_2 == 0 && stateLed_3 == 0 && stateLed_4 == 1){ //1
   digitalWrite(ledBit, HIGH);
   digitalWrite(ledBit2, LOW);
   digitalWrite(ledBit3, LOW);}
  else{
     digitalWrite(ledBit, LOW);
     digitalWrite(ledBit2, LOW);
     digitalWrite(ledBit3, LOW);}
  if (stateLed == 1 && stateLed_2 == 0 && stateLed_3 == 0 && stateLed_4 == 0 ||
    stateLed == 0 && stateLed_2 == 0 && stateLed_3 == 1 && stateLed_4 == 0 || 
    stateLed == 0 && stateLed_2 == 1 && stateLed_3 == 0 && stateLed_4 == 1){//2
   digitalWrite(ledBit, LOW);
   digitalWrite(ledBit2, HIGH);
   digitalWrite(ledBit3, LOW);}
  if (stateLed == 1 && stateLed_2 == 0 && stateLed_3 == 0 && stateLed_4 == 1 ||
    stateLed == 0 && stateLed_2 == 1 && stateLed_3 == 1 && stateLed_4 == 0 || 
    stateLed == 1 && stateLed_2 == 1 && stateLed_3 == 0 && stateLed_4 == 0 ||
    stateLed == 0 && stateLed_2 == 0 && stateLed_3 == 1 && stateLed_4 == 1){//3
   digitalWrite(ledBit, HIGH);
   digitalWrite(ledBit2, HIGH);
   digitalWrite(ledBit3,  LOW);}
  if (stateLed == 1 && stateLed_2 == 1 && stateLed_3 == 0 && stateLed_4 == 1 ||
    stateLed == 0 && stateLed_2 == 1 && stateLed_3 == 1 && stateLed_4 == 1  || stateLed == 1 && stateLed_2 == 0 && stateLed_3 == 1 && stateLed_4 == 0){//4
    digitalWrite(ledBit, LOW);
    digitalWrite(ledBit2, LOW);
    digitalWrite(ledBit3, HIGH);}
  if (stateLed == 1 && stateLed_2 == 1 && stateLed_3 == 1 && stateLed_4 == 0 ||
    stateLed == 1 && stateLed_2 == 0 && stateLed_3 == 1 && stateLed_4 == 1){//5
    digitalWrite(ledBit, HIGH);
    digitalWrite(ledBit2, LOW);
    digitalWrite(ledBit3, HIGH);}
  if (stateLed == 1 && stateLed_2 == 1 && stateLed_3 == 1 && stateLed_4 == 1){
    //6
    digitalWrite(ledBit, LOW);
    digitalWrite(ledBit2, HIGH);
    digitalWrite(ledBit3, HIGH);}

  }
 
 
 