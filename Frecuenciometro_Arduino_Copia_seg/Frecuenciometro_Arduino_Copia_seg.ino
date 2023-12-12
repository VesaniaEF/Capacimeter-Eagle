float contador = 0;
float cap=0;
String incoming = "";

void setup() {
 Serial.begin(9600);
 attachInterrupt(digitalPinToInterrupt(2), contar, FALLING);
 Serial.println("Bienvenido al capacimetro");
 Serial.println("Ingresa tu opción: ");
}

void loop() {
  if (Serial.available()>0)
  {
    delay (997);
    incoming = Serial.readString();
    if(incoming == "1\n")
    {
        Serial.println("Escala 1:");
        Serial.print("Frecuencia: ");
        Serial.print(contador);
        Serial.println(" Hz");
        //contador ++;
      }
    }
    else if (incoming == "2\n")
    {
      Serial.println("Escala 2: ");
      contador=0;
      Serial.print("Frecuencia: ");
      Serial.print(contador);
      Serial.println(" Hz");
    }
    else if (incoming == "3\n")
    {
      delay(997);
      Serial.println ("Escala 3: ");
      contador=0;
        Serial.print("Frecuencia: ");
        Serial.print(contador);
        Serial.println(" Hz");
    }
    contador=0;
}


  /*Primera escala
  Serial.print("Capacitancia:");
  cap= 137.43*(1/contador)-0.7781;
  Serial.print(cap, 5);
  Serial.println("nF");

  //Segunda escala
  Serial.print("Capacitancia:");
  cap= (2133.2*(1/contador)+0.2975);
  Serial.print(cap, 5);
  Serial.println("nF");*/

  /*/Tercera escala
  Serial.print("Capacitancia:");
  cap= (199.59*(1/contador)+0.2151);
  Serial.print(cap, 5);
  Serial.println("uF");
  contador=0;
}/*/
void contar(){
  contador ++;
}
