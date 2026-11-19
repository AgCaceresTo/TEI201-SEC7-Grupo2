# Código Fuente

## Archivos Principales

### `sketch_final.ino`
Archivo principal del proyecto Arduino UNO
**Estructura:**
Setup: Inicialización del sistema
- configuracion de pines
- establecimiento de parametros para LED
Loop: Ciclo principal de ejecución
- verificacion de distacia resivida por el sensro HC-SR04 dentro de parameterps establecido y activacion de LED

---

## Estándares de Código

### Comentarios
```cpp
// Comentarios en español
// Explicar QUÉ hace y POR QUÉ (no solo el CÓMO)

/**
 * Función: leerTemperatura
 * Descripción: Lee temperatura del sensor DHT22
 * Retorna: float - Temperatura en grados Celsius
 */
float leerTemperatura() {
  // código
}
```

### Nombres de Variables
- Variables: `camelCase`
- Constantes: `UPPER_SNAKE_CASE`
- Funciones: `camelCase()`

---

## Testing y Debugging

### Modo Debug
Descomentar para activar modo debug:
```cpp
#define DEBUG true
```

### Monitor Serial
- Baudrate: 115200
- Mensajes informativos con prefijos:
  - `[INFO]` - Información general
  - `[ERROR]` - Errores
  - `[DEBUG]` - Debug
