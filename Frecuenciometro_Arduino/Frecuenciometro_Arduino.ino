float contador = 0;
float cap=0;

void setup() {
 Serial.begin(9600);
 attachInterrupt(digitalPinToInterrupt(3), contar, FALLING);
 Serial.print("Midiendo frecuencia....");
 Serial.println(" ");
}

void loop() {
  delay(3997);
  Serial.print("Frecuencia: ");
  Serial.print(contador);
  Serial.println(" Hz");

//Primera escala
  /*Serial.print("Capacitancia:");
  contador= contador;
  cap= (501.36*(1/contador)+0.4081);
  Serial.print(cap, 5);
  Serial.println("nF");
  
  //Segunda escala
  /*Serial.print("Capacitancia:");
  cap= (4891.4*(1/contador)+16.665);
  Serial.print(cap, 5);
  Serial.println("nF");*/

  //Tercera escala
  Serial.print("Capacitancia:");
  cap= (377.39*(1/contador)+10.951);
  Serial.print(cap, 5);
  Serial.println("uF");
  contador=0;
}

void contar(){
  contador ++;
}
