# Iteración 1 - Concepto Inicial

## Información General

**Fecha:** 25/10/2026  
**Versión:** v1.0  
**Estado:** Prototipo alpha - Prueba de concepto  
**Avance asociado:** Planificación inicial / Avance #1

---

## Descripción

Primera versión del prototipo, enfocada en validar la factibilidad técnica del concepto.

**Objetivo de esta iteración:**
- Probar conexión de sensores básicos
- Validar comunicación con microcontrolador
- Demostrar concepto de actuación
- Circuito básico en protoboard

---

## Componentes Utilizados

### Hardware
- Microcontrolador: ESP32 MOD UAI
- Sensores:
  - Sensor Ultrasónico 	HC-SR04 4 pines
  - Sensor de luz TEMT6000 (integrado)
- Actuadores:
  - Tira LED digital ARGB WS2812B de 30 LEDs (5V)
- Otros:
  - Protoboard
  - Cables jumper
  - Panel solar (5V)
  - Batería de litio 18650 y su portapilas
  - Cable micro usb para conectar al panel solar
  - Cable usb a micro usb


### Software
- IDE: Arduino IDE
- Librerías: FastLED
- Versión código: v1.0

---

## Fotos del Prototipo

Incluir en esta carpeta:
- `v1_detalle_esp32.png`
- `v1_detalle_conexiones.png`

---

## Resultados de Testing Inicial

### Funcionalidad Lograda
❌ Detección cinemática precisa entre 2 y 20 cm con el sensor HC-SR04.

✅ Temporizador funcional de 4 minutos al 50% de brillo con desactivación del sensor ultrasónico mientras ilumina.

❌ Lectura estable alimentando el sensor ultrasónico directamente a 3.3V (arrojaba fantasmas y valores 0 cm).

### Problemas Identificados

1. **Problema 1:**
   - Descripción: El sistema registraba falsos positivos, encendiendo la luz sola por "fantasmas" o congelándose sin detectar el bulto.
   - Causa probable: Alimentar el sensor ultrasónico HC-SR04 con 3.3V lo dejaba falto de energía, generando ruido eléctrico y lecturas inestables al medir distancias cortas.
   - Solución propuesta: Conectar el sensor a los 5V inyectados desde el pin VUSB mediante un puente en la protoboard, y aplicar un filtro estricto anti-fantasmas por software.

2. **Problema 2:**
   - Descripción: Las conexiones mecánicas sueltas provocaban desconexiones y fallas críticas con el mínimo roce de la mesa.
   - Causa probable: Los conectores no estaban insertados hasta el fondo de la placa y los cables compartidos "al aire" chocaban entre sí generando cortocircuitos.
   - Solución propuesta: Empujar los pines fuertemente contra la placa base y enrollar firmemente las uniones aéreas de los cables con huincha aisladora.

---

## Aprendizajes

### Técnicos
- Para alimentar de manera estable la tira LED y el sensor con 5V desde el único pin VUSB del ESP32, es imperativo usar una fila completa de la protoboard como nodo eléctrico multiplicador.
- Implementar un retraso programado (delay(500)) cuando la luz está apagada reduce drásticamente la frecuencia de muestreo y ayuda a salvar la batería sin que el usuario lo note.

### De Diseño
- Dejar el sensor a la altura de la persona y todo el resto del sistema cercano al techo del paradero protege de animales el prototipo y genera menor exigencia en cantidad de cables jumper pero se debe de asegurar buena conexión en el alargue que tendrá el de este.
- El cableado no puede quedar suelto; las conexiones rígidas son fundamentales para que el prototipo pase la prueba de funcionalidad sin interrupciones, sobre todo tener buenos jumper hembra que se conecten a la placa. 

---

## Plan para Iteración 2

### Mejoras Planificadas

**Hardware:**
- [ ] Integrar bien el panel solar y la batería cargada para evitar el computador.
- [ ] Fijar y asegurar estructuralmente todos los módulos y la protoboard para evitar desconexiones por vibración o traslados.
- [ ] Cambiar componentes que tengan funcionalidad dudosa y el cableado destrozado.

**Software:**
- [ ] Codificar el sensor de luz integrado (TEMT6000) para inhibir el encendido de la tira LED durante las horas de sol y maximizar el ahorro energético. 
- [ ] Programar el modo Deep Sleep (sueño profundo) del microcontrolador ESP32 para que el consumo baje a microamperios mientras el paradero está completamente vacío.

**Diseño:**
- [ ] Mejorar el modelo 3D del encapsulado para que se selle hermético, quepan todos los componentes y a la vez los orificios se posicionen exactamente donde debería salir el cableado.
- [ ] Mejorar el ruteo interno utilizando tubos pvc para protegerlos.

---

## Archivos en esta Carpeta

- `v1_codigo.ino` - Código de esta versión
- `v1_caja.f3d` - Esquema inicial de case
- `v1_componentes_inicialmente.png` - Fotografías de los Hardwere antes del montaje
