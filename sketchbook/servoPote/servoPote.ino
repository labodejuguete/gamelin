/* Control de un servo mediante el uso del potenciómetro incorporado de la placa

conectar el Servo de la siguiente manera:

CABLE MARRÓN O NEGRO = PIN G
CABLE ROJO 0 = PIN 5
CABLE AMARILLO o NARANJA = PIN A

Modificado del código original de Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 
adaptado para usar con la librería SoftRcPulseOut por RC Navy  (http://p.loussouarn.free.fr)

*/
#include <SoftRcPulseOut.h> //librería que utilizamos para el control del servo.
 
SoftRcPulseOut miServo;  // Crea el objeto servo para controlar el servo

int pote= A2;  // pin que utiliza el potenciómetro integrado
int servoPin=0;  // pin digital donde conecto el cable de control del servo
int val;    // variable to read the value from the analog pin 
 
void setup() 
{ 
  miServo.attach(servoPin);  // Adjunta el objeto miServo al pin de control designado (servoPin)
} 
 
void loop() 
{ 
  val = analogRead(pote);  // lee el valor que devuelve el potenciómetro y lo alberga en "val"
  val = map(val, 0, 1023, 0, 180);     // escala el valor albergado a las posiciones posibles de un servo(0-180) 
  miServo.write(val);  //ajusta la posición del servo de acuerdo al valor escalado y guardado en "val" 
  delay(20);            //esperamos a que el servo llegue a su posición
  SoftRcPulseOut::refresh(1); // "Refresco" la posición del servo
}

