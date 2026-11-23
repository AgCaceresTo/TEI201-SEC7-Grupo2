# Hardware - Documentación

## Contenido
Esta carpeta contiene toda la documentación técnica del hardware del proyecto.

### 📁 Carpetas

#### `esquemas/`
Diagramas de circuitos y esquemáticos del sistema

#### `bom/`
Bill of Materials (Lista de materiales)

#### `fotos/`
Fotografías de alta resolución del prototipo ensamblado

---

## Instrucciones de Ensamble

### Componentes Principales
1. Arduino UNO R3 - microcontrolador utlizisado para el amnejo de voltajes y recoleccion de datos y manejador de accioens
2. Battery Shield 18650 8v - sujetador y manejador de votlaje por abterias 18650
3. Ultrasonic Sensor HC-SR04- Sensor de distancia
5. Encapsulado PLA - proteje los componenetes electronicos frente golpes y el ambiente.

### Pasos de Ensamblaje
1. Intalar la Battery Shield 18650, Arduino UNO R3 y sensor ultrasonico HC-SR04 en sus esamblajes
2. Realiszar conecciones electricasentre sensores y Arduino UNO R3 como esta dictado en el esquema del proyecto
3. verificar funcionamiento electrico antes de cerrar el encapsulado
4. ensamblar las tapas superiores de cada ensamblaje 

### Precauciones
- ⚠️ verificar correcto cableado del dispositivo para evitar quemar los componentes
- ⚠️ evitar esfuerzos mecanicos sobre el esamblake de los ecapsulados y el montaje de baterias y arduino

---

## Especificaciones Técnicas

**Alimentación:** 5 v y 50 mA
**Consumo:** ~75 mA  
**Dimensiones:** Arduino Case [61.00 mm × 40.50 mm × 85.00 mm], Battery Case [58.00 mm × 30.00 mm × 109.50 mm], Hinged Case for ultasonic sensor HC-SR04 [69.667 mm × 9.10 mm × 78.802 mm]
**Peso:** [gramos]

---

## Troubleshooting

| Problema | Posible Causa | Solución |
|----------|---------------|----------|
| LED no enciende | Error de cableado | asegurese de seguir el esquema de cabliado |
| Sensor ultrasonico no mide distacia | Error de cableado | asegurese de seguir el esquema de cabliado |
| Arduino UNO R3 no enciende | Alimentacion sin energia | asegurar que la fuente de poder del Arduino UNO tenga sufieciente energia |
