/*
  Analog input, analog output.

  Leo el pin analógico donde tengo conectado el potenciómetro (pin D) 
escalo el valor y lo escribo como PWM en el pin C para controlar la velocidad
de un motor o el brillo de una tira de leds. El pin C integra un transistor por
lo que no es necesario sumar componentes (conectar el cable positivo de la tira de leds o motor
al pin V)

*/

// 
const int analogInPin = A2;  // pin donde está conectado el potenciómetro (al ser declarada como "const" su valor será fijo e invariable)
const int analogOutPin = 1; // pin donde está conectado el motor/tira de leds (al ser declarada como "const" su valor será fijo e invariable)

int valorSensor = 0;        // valor leido del potenciómetro
int valorPWM = 0;        // valor de salida de la señal de control PWM 

void setup() {
}

void loop() {
  valorSensor = analogRead(analogInPin); //leo el sensor y albergo su valor en la variable
  valorPWM = map(valorSensor, 0, 1023, 0, 255); //debido a que la entrada analógica va de 0 a 1023 (10bits) y la salida PWM de 0 a 255 (8 bits), debo escalarla.
  analogWrite(analogOutPin, valorPWM); //escribo la señalPWW correspondiente a la operación matemática realizada en la línea superior
}
