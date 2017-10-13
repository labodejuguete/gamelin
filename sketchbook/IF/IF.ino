/*
 Este ejemplo demuestra el uso de la declaración "if" como condicional
 Lee el estado del potenciómetro integrado a la placa y prende un led sólo si el valor está por encima
 de un cierto umbral determinado.
 Conectar un led al pin B (ánodo) y al pin G (cátodo)
*/
const int pote = A2;    // pin donde se encuentra el potenciómetro
const int ledPin = 2;       // pin donde se encuentra el LED
const int umbral = 512;   // umbral arbitrario dentro del rango de lecturas analógicas (0 a 1023)

void setup() {
pinMode(ledPin, OUTPUT); //inicializo el pin donde está conectado el led como salida

}

void loop() {

  int valorAnalogico = analogRead(pote); //declaro una variable y albergo en ella el valor obtenido de la lectura del potenciómetro

  if (valorAnalogico > umbral) { //si el valor albergado es superior al umbral, entonces ingreso a la condición y ejecuto la siguiente línea)
    digitalWrite(ledPin, HIGH); //enciendo el LED
  } else { //si el valor albergado es inferior o igual al umbral, entonces ejecuto lo que está a continuación.
    digitalWrite(ledPin, LOW); //apago el LED
  }
}
