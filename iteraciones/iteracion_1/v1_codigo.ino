#include <FastLED.h>

// =========================================================
// PINES DE TU PLACA UAI
// =========================================================
#define PIN_LED      26   
#define PIN_TRIG     12   
#define PIN_ECHO     14   
#define NUM_LEDS     30   // Escalado a 30 LEDs exactos

CRGB leds[NUM_LEDS]; 

// =========================================================
// VARIABLES DE TIEMPO
// =========================================================
unsigned long tiempoInicio = 0;
const unsigned long duracionLuz = 240000; // 4 minutos exactos en milisegundos
bool luzPrendida = false;

void setup() {
  Serial.begin(115200); 
  
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);

  FastLED.addLeds<WS2812B, PIN_LED, GRB>(leds, NUM_LEDS);
  
  // El máximo de FastLED es 255. La mitad exacta (50% de iluminación) es 127.
  FastLED.setBrightness(127); 

  FastLED.clear(); 
  FastLED.show();
}

void loop() {
  
  // CASO A: LA LUZ ESTÁ APAGADA -> EL SENSOR TRABAJA
  if (luzPrendida == false) {
    
    // 1. Disparo ultrasónico
    digitalWrite(PIN_TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(PIN_TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(PIN_TRIG, LOW);

    // 2. Cálculo con timeout de 30ms para evitar que la placa se congele
    long duracion = pulseIn(PIN_ECHO, HIGH, 30000); 
    long distancia = duracion * 0.034 / 2; // Distancia en centímetros

    Serial.print("Buscando... Distancia: ");
    Serial.println(distancia);

    // 3. Rango cinemático estricto: detecta solo si está entre 2 y 20 cm
    if (distancia >= 2 && distancia <= 20) {
      Serial.println("¡Mano detectada! Prendiendo luz y apagando sensor...");
      fill_solid(leds, NUM_LEDS, CRGB::Yellow); 
      FastLED.show();
      luzPrendida = true;
      tiempoInicio = millis(); // Se clava el tiempo t=0
    }
    
    delay(100); // Retardo mínimo para estabilizar el eco
  } 
  
  // CASO B: LA LUZ ESTÁ PRENDIDA -> EL SENSOR DEJA DE FUNCIONAR
  else {
    
    // El procesador solo se dedica a restar el tiempo actual menos t=0
    if (millis() - tiempoInicio >= duracionLuz) {
      Serial.println("4 minutos cumplidos. Apagando luz y reactivando sensor.");
      FastLED.clear(); 
      FastLED.show();  
      luzPrendida = false; // Esto vuelve a encender el radar ultrasónico
    }
    
    delay(50); // Mantiene el reloj interno estable
  }
}