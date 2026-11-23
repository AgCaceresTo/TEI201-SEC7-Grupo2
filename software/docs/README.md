# Documentación de Software

## Contenido

Esta carpeta contiene la documentación técnica del software desarrollado para el sistema de confirmación de distancia y encendido de luz.

---

# Diagramas de Flujo

Se incluye en la misma carpeta el diagrama de flujo del sistema (`Diagrama.png`).

---

# Documentación de Funciones

## medirDistancia()

**Propósito:**

Emite un pulso ultrasónico mediante el sensor HC-SR04 y calcula la distancia en centímetros hacia el objeto detectado según el tiempo de respuesta del eco.

**Parámetros**

- No recibe parámetros.

**Retorna**

- `float`: distancia medida en centímetros (cm).

**Ejemplo**

```cpp
float distancia = medirDistancia();
```

---

## verificarRango()

**Propósito:**

Verifica si la distancia calculada por el sensor HC-SR04 se encuentra dentro del rango configurado para activar la alerta de presencia.

**Parámetros**

- `float distancia`: valor de la distancia en centímetros a evaluar.

**Retorna**

- `bool`: `true` si la distancia está dentro del rango definido, `false` en caso contrario.

**Ejemplo**

```cpp
bool enRango = verificarRango(distancia);
```

---

## actualizarIluminacion()

**Propósito:**

Enciende, apaga o cambia el estado de la iluminación LED (o tira Adafruit NeoPixel) según si la medida se encuentra dentro del rango de activación.

**Parámetros**

- `bool enRango`: estado de verificación de distancia en el rango permitido.

**Retorna**

- No retorna valores. Actualiza directamente el estado físico de los actuadores luminosos.

**Ejemplo**

```cpp
actualizarIluminacion(enRango);
```

---

## setup()

**Propósito:**

Inicializa la comunicación serial, configura los pines de entrada/salida para el sensor HC-SR04 (Trigger y Echo) y prepara el módulo de iluminación LED.

---

## loop()

**Propósito:**

Ejecuta continuamente la lectura de distancia del sensor ultrasónico, evalúa si la distancia está en el rango configurado y actualiza la iluminación en tiempo real.

---

# Manual de Instalación

## Requisitos

- Arduino IDE o Arduino Cloud.
- Placa de desarrollo (Arduino Uno, ESP32 o compatible).
- Librerías:
  - Adafruit NeoPixel (o librería correspondiente al módulo LED utilizado).

## Instalación

1. Instalar Arduino IDE o ingresar a Arduino Cloud.
2. Instalar las librerías necesarias mediante el Gestor de Librerías.
3. Abrir el archivo de código principal `main.ino`.
4. Configurar los pines de hardware (`TRIG_PIN`, `ECHO_PIN`, `LED_PIN`).
5. Seleccionar la placa de desarrollo y el puerto de comunicación COM.
6. Compilar y cargar el programa en la placa.

---

# Manual de Operación

## Encendido del sistema

1. Conectar la placa mediante cable USB a una computadora o fuente externa de 5V.
2. Aguardar la inicialización del hardware.
3. Abrir el Monitor Serial para verificar el correcto funcionamiento inicial del sistema.

---

## Operación normal

1. El sensor ultrasónico HC-SR04 realiza mediciones periódicas de distancia.
2. El microcontrolador calcula la distancia exacta y evalúa si se halla dentro del rango límite.
3. Si la distancia ingresa al rango definido, la iluminación LED se enciende o activa la alerta visual.
4. Cuando el objeto sale del rango, el sistema restablece las luces a su estado de reposo o apagado.

---

## Apagado del sistema

1. Detener la lectura serial si el Monitor Serial se encuentra activo.
2. Desconectar la fuente de energía o el cable USB del sistema.

---

# Troubleshooting

## Problemas comunes

### El sensor HC-SR04 no entrega lecturas o devuelve 0 cm

**Causa probable**

- Error de cableado en los pines Trigger o Echo.
- Falsa conexión o falta de alimentación suficiente en el sensor.

**Solución**

- Revisar el cableado físico y confirmar que coincida con los pines asignados en el código.
- Asegurar que el sensor reciba una alimentación estable de 5V.

---

### La iluminación LED no responde al ingresar un objeto al rango

**Causa probable**

- Pin de control `LED_PIN` mal asignado en el firmware.
- Falta de conexión de tierra común (GND) entre la placa y la tira o módulo LED.
- Falta inicializar el objeto del LED en la función `setup()`.

**Solución**

- Confirmar el número del pin de datos LED configurado en el archivo principal.
- Asegurar que exista una masa/tierra (GND) compartida en todo el circuito.
- Verificar la inclusión de `strip.begin()` dentro de la función `setup()`.

---

### Retardo en la activación de las luces

**Causa probable**

- Presencia de retardos pasivos extensos (`delay()`) dentro del ciclo principal `loop()`.

**Solución**

- Reducir los valores de `delay()` o implementar un control de tiempo no bloqueante utilizando `millis()`.
