/*
  Fade
Este ejemplo muestra como subir y bajar progresivamente la velocidad de un motor CC
o la intensidad de una tira de leds conectada al pin C y al pin V.
Debido a que el pin C cuenta con un transistor integrado, no se requieren componentes extra
Este ejemplo hace uso de la función analogWrite() que permite gerar una señal PWM (Modulación por ancho de pulso)
*/

int PWMpin = 1;  // Salida digital que permite generar señal PWM (Pin C en la placa)
int brilloVelo = 0;    // variable donde guardaremos el valor de brillo/velocidad de nuestro actuador (tira de leds o motor)
int pasos = 1;    // en cuantos pasos aumentar o disminuir el brillo/velocidad
int espera = 30;  //este valor será la pausa en cada ciclo de aumento/disminución
void setup() {
  pinMode(PWMpin, OUTPUT);
}


void loop() {

  analogWrite(PWMpin, brilloVelo);   // determina brillo/velocidad del pin C

  brilloVelo = brilloVelo + pasos;
  if (brilloVelo <= 0 || brilloVelo >= 255) {   // revierto la dirección al llegar a los topes de valor posible en PWM (0 a255)
    pasos = -pasos;
  }
  delay(espera); //espero en cada ciclo para poder percibir los cambios
}
