#include <Adafruit_NeoPixel.h>

// Pines exactos según tu conexión actual
#define PIN_LED   7
#define NUM_LEDS  20   // Cantidad de LEDs de tu tira
#define PIN_TRIG  13
#define PIN_ECHO  12

// Parámetros del prototipo
const int DISTANCIA_MIN = 2;           // Mínimo 2 cm (filtro anti-fantasmas)
const int DISTANCIA_MAX = 20;          // Máximo 20 cm
const unsigned long TIEMPO_LUZ = 240000; // 4 minutos

Adafruit_NeoPixel strip(NUM_LEDS, PIN_LED, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  
  strip.begin();
  strip.setBrightness(127); // Brillo al 50% para optimizar batería
  strip.show();             // Inicia con la tira apagada
  
  Serial.begin(9600);
}

void loop() {
  long distancia = medirDistancia();
  
  Serial.print("Distancia detectada: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Activa la luz solo si detecta un objeto entre 2 y 20 cm
  if (distancia >= DISTANCIA_MIN && distancia <= DISTANCIA_MAX) {
    encenderAlerta();
    delay(TIEMPO_LUZ); // Mantiene encendido y pausa el sensor
    apagarAlerta();
  }

  // Espera 500 ms en reposo para bajar el muestreo y ahorrar energía
  delay(500);
}

long medirDistancia() {
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);
  
  long duracion = pulseIn(PIN_ECHO, HIGH, 30000);
  if (duracion == 0) return 999; // Evita lecturas erróneas en 0 cm
  
  return duracion * 0.034 / 2;
}

void encenderAlerta() {
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(255, 0, 0)); // Luz roja
  }
  strip.show();
}

void apagarAlerta() {
  strip.clear();
  strip.show();
}
