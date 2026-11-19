# Archivos Fusion 360

## Archivos Requeridos

### `Arduino_Case_v2.2.f3d`
Archivo principal con **historial de cambios completo**

### `Battery_Case_v1.2.f3d`
Archivo secundario con **historial de cambios completo**

### `Hinged Case for Ultrasonic Sensor (HC-SR04).f3d`
Archivo Elegido, https://makerworld.com/en/models/1913595-hinged-case-for-ultrasonic-sensor-hc-sr04#profileId-2088211

**DEBE INCLUIR:**
-  Todos los componentes modelados
-  Ensamble completo funcional
-  Historial de diseño (timeline)
-  Materiales asignados
-  Constraints y relaciones

---

## Estructura del Modelo

### Componentes (Components)
```
Ensamble_Principal
├── Encapsulado_Inferior
├── Encapsulado_Superior
├── Arduino UNO R3
├── Sensor_DHT22
├── LED_Indicador
├── Soporte_Bateria
├── Bracket_Montaje
└── Tornilleria
```

### Uniones (Joints)
Documentar las juntas principales y sus restricciones

El ensamblaje considera:
  
- Tapa ensamblada sobre la base.
- Soporte fijado al interior del encapsulado.
- Arduino UNO R3 montado sobre el soporte.
- Sensores puestos en sus unicos ensamblajes.
- Batería ubicada en su enzamblaje unico.

### Parámetros
Listar parámetros principales utilizados para la caja del Arduino:
- `ancho_total = 61.00 mm`
- `alto_total = 40.50 mm`
- `largo_total = 85.00 mm`
- `grosor_pared = 3mm`

Listar parámetros principales utilizados para la caja de Baterias:
- `ancho_total = 58.00 mm`
- `alto_total = 35.00 mm`
- `largo_total = 109.50 mm`
- `grosor_pared = 3mm`

---

## Instrucciones de Apertura

1. Abrir Fusion 360
2. File > Open > Seleccionar archivo `Arduino_Case_v2.2.f3d`
3. Verificar que todas las referencias están cargadas
4. Revisar timeline para ver historial

---

## Versiones Caja principal Arduino UNO

| Versión | Fecha | Cambios Principales |
|---------|-------|---------------------|
| v2.2 | [17/11/26] | Versión final |
| v2.1 | [17/11/26] | Ajsutes para agujeros de acceso de cables y tornillos |
| v2.0 | [16/11/26] | Nuevo modelo por cambio de componentes |
| v1.0 | [25/10/26] | Primera versión funcional |

## Versiones Caja Baterias

| Versión | Fecha | Cambios Principales |
|---------|-------|---------------------|
| v1.2 | [17/11/26] | Versión final |
| v1.1 | [17/11/26] | Ajsutes para agujeros de acceso de cables y tornillos |
| v1.0 | [17/11/26] | Primera versión funcional |

---
