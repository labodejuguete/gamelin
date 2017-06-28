/*
  _____                      _  __       _    _  _____ ____  
 / ____|                    | |/_/      | |  | |/ ____|  _ \ 
| |  __  __ _ _ __ ___   ___| |_ _ __   | |  | | (___ | |_) |
| | |_ |/ _` | '_ ` _ \ / _ \ | | '_ \  | |  | |\___ \|  _ < 
| |__| | (_| | | | | | |  __/ | | | | | | |__| |____) | |_) |
 \_____|\__,_|_| |_| |_|\___|_|_|_| |_|  \____/|_____/|____/ 
 
               por el Laboratorio de Juguete
              
https://github.com/labodejuguete/gamelin/blob/master/README.md
https://laboratoriodejuguete.com/

PINOUT:
A: D0(PWM)
B: D2/A1 
C: D1(PWM)
D: D4/A2/USB-
E: D3/A3/USB+
F: D5/A0

 */

int freq[]= {65,69,78,98,104,116,131,139,156,
             196,208,233,262,277,311,392,415,
             466,523,554,622,784,831,932,1046,
             1109,1244,1568,1661,1865,2093,2217,
             2489,3136,3322,3729}; // variable de tipo array (matriz) donde guardo las 
                                   //frecuencias a ejecutar. Luego las buscaré por su ubicación
                                   // o número de índice dentro del array.
int disparo[]= {25,50,100,200,400,800,1600}; // variable de tipo array (matriz) donde guardo los 
                                          //intervalos de tiempo (expresados en milisegundos)
                                          //entre los "disparos" de cada tono. Luego los
                                          //buscaré por su ubicación o número de índice dentro
                                          //del array.
int cobre;  // variable en la que alojaremos el valor que entrega el contacto con la placa.          
int pote; // variable donde alojaremos el valor del potenciómetro A3.

void setup() { //ésto se ejecuta sólo una vez
pinMode(0, OUTPUT); // declaro el pin A (D0) como salida .
}
void loop() { //ésto se ejecuta continuamente...
  pote= analogRead (A2); //leo el valor numérico que entrega elvoltaje resultante
                         //de mi contacto con la placa y lo asigno a esta variable.
                            
  cobre = analogRead(A3); //leo el valor numérico que entrega elvoltaje resultante
                          //de la posición de la perilla del pote A3 y lo asigno a 
                          //esta variable.
  int val1 =  map(cobre, 0, 899, 35, 0); //variable donde asigno el resultado de escalar
                                        //los valores guardados en la variable cobre
                                        //a la cantidad de valores de frecuencia guardados
                                        //en el array freq[].
  
  int val2= map(pote, 0, 1023, 6, 0); //variable donde asigno el resultado de escalar
                                        //los valores guardados en la variable pote
                                        //a la cantidad de valores de tiempo guardados
                                        //en el array disparo[].
if (cobre < 900){ // si se toca el cobre de la placa...
  tone (0, freq[val1]); // ejecutar en pin A(D0) la frecuencia del array freq[]
                       //cuya ubicación esté alojada en la variable val1.
delay (disparo[val2]); //esperar la cantidad de milisegundos del array disparo[]
                       // cuya ubicación esté alojada en la variable val2.
}
else{ // si no se toca el cobre de la placa...
noTone (0); //silenciar el pin A (D0).
}
}
/*  
Octavas, notas y frecuencias correspondientes expresadas en números enteros:
 C      C#     D      D#     E      F      F#     G      G#     A      A#     B
 16   , 17   , 18   , 19   , 21   , 22   , 23   , 25   , 26   , 27   , 28   , 31
 33   , 36   , 37   , 39   , 41   , 44   , 46   , 49   , 52   , 55   , 58   , 62
 65   , 69   , 73   , 78   , 82   , 87   , 92   , 98   , 104  , 110  , 116  , 123
 139  , 139  , 147  , 156  , 165  , 175  , 185  , 196  , 208  , 220  , 233  , 247
 262  , 277  , 294  , 311  , 330  , 349  , 370  , 392  , 415  , 440  , 466  , 494
 523  , 554  , 587  , 622  , 659  , 698  , 740  , 784  , 831  , 880  , 932  , 987
 1047 , 1109 , 1175 , 1245 , 1319 , 1397 , 1480 , 1568 , 1661 , 1760 , 1865 , 1976
 2093 , 2217 , 2349 , 2489 , 2637 , 2794 , 2960 , 3136 , 3322 , 3520 , 3729 , 3951
 4186 , 4435 , 4699 , 4978 , 5274 , 5588 , 5920 , 6272 , 6645 , 7040 , 7459 , 7902
*/

