int led = 13; 
int buttom = 12;
int stateButtom = 0; //Inicia OFF
int flagButtom = 0;  // Var comparativa condicional .Inicia OFF
int stateLed = 0;    // Var comparativa condicional .Inicia OFF

void setup() {
  pinMode(led, OUTPUT); //led == Saída
  pinMode(buttom, INPUT); //botao == Entrada

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
    // put your main code here, to run repeatedly:
  
}