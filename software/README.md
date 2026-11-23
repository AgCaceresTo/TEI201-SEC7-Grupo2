# Software - Documentación

## Contenido
Esta carpeta contiene todo el código y documentación del software del proyecto.

### 📁 Carpetas

#### `src/`
Código fuente del Arduino UNO R3 en formato `.ino`

#### `librerias/`
Informacion sobre librerias utilizadas dentro del codigo. NO incluye librerias externas desde Arduino IDE

#### `docs/`
Documentación técnica del software

---

## Stack Tecnológico

**Plataforma:** Arduino UNO R3  
**Lenguaje:** C/C++  
**IDE:** Arduino IDE 2.3.11
**Librerías principales:**
- [Adafruit NeoPixel] - Versión 1.15.5

---

## Instalación y Configuración

### 1. Instalar Arduino IDE
Codigo puede cargarse desde Arduino IDE, configurando previamente el mircrocontrolador Arduino UNO

### 2. Configurar Arduino
Selecionar la placa Arduino UNO y conectar mediante cable USB

### 3. Instalar Librerías

Instalar desde gestor de librerias
- Adafruit NeoPixel

### 4. Cargar Código
1. Abrir `src/main.ino`
2. Seleccionar placa y puerto
3. Compilar y subir

---

## Configuración de Parámetros

Editar las siguientes constantes en el código:

```cpp
// Pines 
#define PIN_LED   7
#define NUM_LEDS  20   // Cantidad de LEDs de tu tira
#define PIN_TRIG  13
#define PIN_ECHO  12

// Parámetros del Proyecto
const int DISTANCIA_MIN = 2;           // Mínimo 2 cm (filtro anti-fantasmas)
const int DISTANCIA_MAX = 20;          // Máximo 20 cm
const unsigned long TIEMPO_LUZ = 240000; // 4 minutos
```

---

## Arquitectura del Software
```cpp
[Sensor HC-SR04
  ↓
Arduino UNO
  ↓
Verificacion de distancia
  ↓
Activacion del LED]
```
### Módulos Principales
1. **Inicialización** - Configuracion de sensor
2. **Lectura de Sensores** - Catura de distancia
3. **Procesamiento** - Comparacion con distacia nesecitada
4. **Actuación** - Activacion de LED

---
