# Librerías

## Librerías Estándar (Arduino IDE)

Instalar desde el Library Manager de Arduino IDE:

1. **[Adafruit NeoPixel]** - v[1.15.5]
   - Propósito: Libreria de Arduino para controlar LED pixels de un solo cable 
   - Instalación: `Sketch > Include Library > Manage Libraries > Buscar "Adafruit Neopixel"`
---

### Estructura
```
libreries/
├── Adafruit_NeoPixel/
│   ├── examples
│   ├── Adafruit_NeoPixel.cpp
│   ├── Adafruit_NeoPixel.h
│   ├── Adafruit_NeoPixel_RP2.cpp
│   ├── CONTRIBUTING.md
│   ├── COPYING.File
│   ├── esp.c
│   ├── esp8266.c
│   ├── kendyte_k210.c
│   ├── keywords.txt
│   ├── library.Properties
│   ├── psoc6.c
│   ├── README.md
│   └── rp2040_pio.h
```

### Instalación Manual
```bash
# Copiar carpeta a Arduino libraries
arduino-cli lib update-index
arduino-cli lib install "Adafruit NeoPixel"

```

---

## Dependencias Completas

| Librería | Versión | Fuente | Obligatoria |
|----------|---------|--------|-------------|
| Arduino | Incluida en Arduino IDE | Arduino Core | ✅ |
| Adafruit NeoPixel | 1.15.5 | Arduino Library Manager | ✅ |
