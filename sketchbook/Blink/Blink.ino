/*
  Blink
Enciende un led conectado directamente al pin B (ánodo) y al pin G (cátodo). No requiere resistencia ya que ese pin tiene una resistencia de 1K integrada
*/

// la función reset se ejecuta sólo una vez al encender la placa
void setup() {
 
  pinMode(2, OUTPUT); // inicializo el pin digital 2 (B) como salida
}

// la función loop corre indefinidamente hasta apagarse la placa
void loop() {
  digitalWrite(2, HIGH);   // enciende el LED (HIGH corresponde a 5V)
  delay(1000);                       // espera un segundo (la función delay usa milisegundos como unidad)
  digitalWrite(2, LOW);    // apaga el LED (LOW equivale a 0V)
  delay(1000);                       // espera un segundo (la función delay usa milisegundos como unidad)
}
