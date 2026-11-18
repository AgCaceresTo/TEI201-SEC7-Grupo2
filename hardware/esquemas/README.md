# Esquemas de Circuito

## Archivos Incluidos

### Diagrama del cicuito (Formato Wokwi)
- `20261118_v2.0Diagram.json` - Archivo de proyecto Wokwi
- `20261118_v2.0Diagram_screenshot.png` - Captura del circuito
- `20261118_v2.0wokwi_link.txt` - URL del proyecto online
---

## Descripción del Circuito

Sitema utiliza Arduino UNO R3 como unidad de procesamiento y manejo de corriente. El Arduino recive la medida del sensor HC-SR04. si la medida del sensor es dentro del rango de 2cm - 20cm, el Arduino activa el LED strip durante 4 minutos.

## Conexiones Principales

| Componente | Conexión |
|------------|----------|
| Arduino UNO R3 | Microcontrolador principal |
| Sensor HC-SR04 (TRIG)| 13 (Entrada Digital) |
| Sensor HC-SR04 (ECHO)| 12 (Entrada Digital) |
| LED Strip | 7 (Entrada Digital) |
| Alimentación | 5 V |
| Tierra | GND común |

## Notas de Diseño

- El arduino estaria conectado a un pack the baterias como su entrada de electricidad mediante el USB-B
- Todos los componentes comparten una referencia común de tierra (GND).
- El circuito fue validado mediante simulación en Wokwi antes de su implementación física en el prototipo.

---

## Software Utilizado

- Wokwi (simulación y validación del circuito).
- Arduino IDE 2.x (desarrollo y carga del firmware).
