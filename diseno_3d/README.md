# Diseño 3D - Documentación

## ⚠️ REQUISITO CRÍTICO

El modelo 3D debe incluir **TODOS** los componentes del prototipo:
- ✅ Encapsulado exterior completo
- ✅ Placa ESP32/Arduino (con dimensiones exactas)
- ✅ Todos los sensores en posición de instalación
- ✅ Todos los actuadores
- ✅ Batería / fuente de alimentación
- ✅ Cableado (routing aproximado)
- ✅ Sistema de montaje (brackets, tornillos)
- ✅ Orificios de ventilación (si aplica)

**NO ES ACEPTABLE:** Solo el encapsulado vacío sin componentes internos

---

## Carpetas

#### `fusion360/`
Archivos nativos de Fusion 360 (.f3d)

#### `renders/`
Imágenes renderizadas de alta calidad

---

## Especificaciones

**Software:** Autodesk Fusion 360  
**Unidades:** Milímetros (mm)  
**Escala:** 1:1 (dimensiones reales)

## Arduino Case
**Dimensiones externas:** [61.00 mm × 40.50 mm × 85.00 mm]  
**Peso estimado:** [XXX gramos]  
**Material:** [PLA]

## Battery Case
**Dimensiones externas:** [58.00 mm × 30.00 mm × 109.50 mm]  
**Peso estimado:** [XXX gramos]  
**Material:** [PLA]

## Hinged Case for ultasonic sensor HC-SR04
**Dimensiones externas:** [69.667 mm × 9.10 mm × 78.802 mm]  
**Peso estimado:** [XXX gramos]  
**Material:** [PLA]

---

## Consideraciones de Diseño

### Funcionales
- [✓] Acceso a puertos USB/alimentación
- [✓] Ventilación adecuada
- [✓] Protección de componentes
- [✓] Fácil acceso para mantenimiento
- [~] Resistencia a condiciones ambientales

### Fabricación
- [✓] Imprimible sin soportes excesivos
- [✓] Tolerancias de ensamble (+0.2mm)
- [✓] Grosor de pared mínimo 3mm
- [✓] Sin ángulos imposibles (overhangs <45°)

---

## Configuración de Impresión 3D (si fue utilizada)

**Impresora:** [Bambulab]  
**Material:** [PLA]  
**Calidad de capa:** 0.2mm  
**Relleno:** 100%  
**Soportes:** [Sí, en agujeros creados para acceso de cables y conceccioens]  
**Temperatura nozzle:** [200°C - 210°C]  
**Temperatura cama:** [50°C - 60°C]  
**Velocidad:** [500mm/s]

**Tiempo estimado de impresión:** [X horas]  
**Peso de material:** [X gramos]
