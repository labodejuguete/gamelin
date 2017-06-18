# gamelin
Gamelín (USB) es una placa de desarrollo electrónico basada en el uso del microcontrolador ATTINY85. 
Toma como base para su diseño al modelo Digispark de Digistump:
http://digistump.com/products/1
y como él, usa el bootloader Micronucleus (V1.02) que permite integrar comunicación USB:
https://github.com/micronucleus/micronucleus/tree/v1.11

Gamelín incluye:

*Puerto USB tipo B.

*Entrada de allimentación (con protección contra polaridad invertida) con regulador a 5V (7805) con una entrega de 1,5A máximo y entrada de voltage de hasta 35V (7V a 12V sugerida).

*Conector para batería de 9V.

*Salida de audio (TRS 3,5mm stereo) con control de volumen en su pin A (D0).

*Superficie táctil para control con sensibilidad ajustable (trimpot) en el pin E (A3).

*Potenciómetro en el pin D (A2).

*Transistor NPN (BC548) para controlar actuadores (motores, relés, etc.) y luces (tiras de leds y leds de alta potencia) hasta 30V y 300mA en su pin C (D1/PWM).

*Compatibildad para conexión directa de neopixel sticks en pin B (D2).

*Conector de 9 pines para prototipado en protoboard.

GAMELÍN se programa usando la IDE ARDUINO (1.6 o superior)
https://www.arduino.cc/en/Main/Software



