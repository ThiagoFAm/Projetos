  int led_y = 11;
  int led_b = 6;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(led_y, OUTPUT);  
  pinMode(led_b, OUTPUT); 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_y, HIGH);
  digitalWrite(led_b, LOW);
  
  delay(300);
  digitalWrite(led_y, LOW);
  digitalWrite(led_b, HIGH);
  delay(300);
}
