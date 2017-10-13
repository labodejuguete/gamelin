/*
  Pitch follower
ejecuta un tono dependiente del valor de entrada analógica (pinD)
  Plays a pitch that changes based on a changing analog input
  Se utilizará el pin A que cuenta con salida de audio y control de volumen
  
*/

void setup() {
}

void loop() {
  int pote = analogRead(A2); //leo el valor numérico en la entrada analógica y lo guardo en la variable "pote"
  int tono = map(pote, 0, 1023, 50, 4000); // escalo el valor albergado para tener un mayor rango de frecuencias.
  tone(0, tono, 10); //ejecuto el tono  (el valor corresponde a herzios)
  delay(1);        // mínimo delay para estabilidad 
}
