/*
  Analog Input
Mediante el potenciómetro integrado en la placa, podremos controlar la velocidad
de intermitencia de un led conectado al pin B

*/

int pote = A2;    // selecciono la entrada analógica donde se encuentra conectado el potenciómetro
int ledPin = 2;      // selecciono el pin donde conectaré el led
int valorSensor = 0;  // variable donde albergaré el valor numérico que entregue la entrada analógica

void setup() {
  pinMode(ledPin, OUTPUT); //declaro el pin como salida
}

void loop() {
  
  valorSensor = analogRead(pote); //Guardo en la variable el valor que me entrega la lectura analògica del potenciómetro
  digitalWrite(ledPin, HIGH); //prendo el led 
  delay(valorSensor); //espero la cantidad de tiempo determinada por el valor guardado anteriormente
  digitalWrite(ledPin, LOW); //apago el led
  delay(valorSensor); //espero la cantidad de tiempo determinada por el valor guardado anteriormente
}
