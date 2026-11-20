# Código Fuente

## Archivos Principales

### `sketch_final.ino`
Archivo principal del proyecto Arduino UNO
**Estructura:**

#### setup()

Realiza la inicialización del sistema:
  
- Configura los pines digitales del sensor ultrasónico (`PIN_TRIG` como salida y `PIN_ECHO` como entrada).
- Inicializa la tira LED NeoPixel y ajusta su brillo al 50%.
- Asegura que la tira LED comience apagada.
- Inicializa la comunicación serial a 9600 baudios para monitoreo.

#### loop()

Ejecuta continuamente las tareas principales del sistema:
  
- Realiza la medición de distancia invocando a `medirDistancia()`.
- Imprime la distancia detectada en el Monitor Serial.
- Evalúa si el objeto está dentro del rango válido (entre 2 cm y 20 cm).
- Si está en rango: enciende la alerta visual (`encenderAlerta()`), mantiene el estado durante el tiempo configurado (`TIEMPO_LUZ`) y luego apaga la alerta (`apagarAlerta()`).
- Aplica una pausa de reposo de 500 ms para reducir la frecuencia de muestreo y optimizar el consumo de energía.

---

## Organización del código

El firmware está estructurado en funciones modulares para facilitar su mantenimiento y lectura.

| Función | Descripción |
|----------|-------------|
| `medirDistancia()` | Envía un pulso ultrasónico y calcula la distancia en centímetros basándose en el tiempo de eco. |
| `encenderAlerta()` | Enciende todos los LEDs de la tira NeoPixel en color blanco para indicar presencia. |
| `apagarAlerta()` | Limpia el buffer de la tira NeoPixel y apaga todos los LEDs. |
| `setup()` | Configura el hardware, la comunicación serial y el estado inicial de la tira LED. |
| `loop()` | Controla la lógica recurrente de detección, activación del temporizador y ahorro energético. |

---

## Estándares de Código

### Comentarios

El código está documentado con comentarios en español explicativos que detallan los parámetros de configuración (pines, distancias límites y temporizadores), así como la lógica detrás de cada acción principal.

### Convenciones utilizadas

- **Pines y Configuración Directa:** macros en mayúsculas (`PIN_LED`, `NUM_LEDS`, `PIN_TRIG`, `PIN_ECHO`).
- **Constantes de Configuración:** mayúsculas con guion bajo (`DISTANCIA_MIN`, `DISTANCIA_MAX`, `TIEMPO_LUZ`).
- **Objetos y Clases:** estilo camelCase o identificadores descriptivos (`strip`).
- **Funciones:** camelCase (`medirDistancia()`, `encenderAlerta()`, `apagarAlerta()`).

---

### Nombres de Variables
- Variables: `camelCase`
- Constantes: `UPPER_SNAKE_CASE`
- Funciones: `camelCase()`

---

## Testing y Debuging

### Monitor Serial

Se utiliza el Monitor Serial para realizar el seguimiento en tiempo real de las lecturas del sensor ultrasónico.

**Baudrate:** `9600`

Los mensajes permiten verificar:

- Lecturas continuas de distancia en centímetros.
- Detección de objetos fuera de rango o lecturas erróneas (`999 cm`).
- Confirmación de activación y ciclo de espera de la luz de alerta.

Ejemplo de salida:

```text
Distancia detectada: 15 cm
Distancia detectada: 8 cm
Distancia detectada: 999 cm

### Monitor Serial
- Baudrate: 115200
- Mensajes informativos con prefijos:
  - `[INFO]` - Información general
  - `[ERROR]` - Errores
  - `[DEBUG]` - Debug
```

###Parametros del sistema
Formato de configuracion y hardware:
```
  "pin_led": 7,
  "num_leds": 20,
  "pin_trig": 13,
  "pin_echo": 12,
  "distancia_min_cm": 2,
  "distancia_max_cm": 20,
  "tiempo_luz_ms": 240000
```
