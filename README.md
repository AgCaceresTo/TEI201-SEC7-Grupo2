### Información del Equipo
- **Integrantes:**
  - Agustina Cáceres
  - Miguel Flores
  - Benjamín Peralta
  - Martín Rodriguez
  - Valentina Vargas
  
- **ODS Seleccionado:**
  - ODS 10 “Reducción de las desigualdades”
  - ODS 11 “Ciudades y comunidades sostenibles”

- **Problema a resolver:** Existe una dificultad crítica para aquellos que se movilizan entre zonas rurales y urbanas para lo que respecta el uso de transporte público, esto debido a que aquellos conductores se saltan paradas por falta de una visión clara de aquel que espera en el paradero. Esto obliga a trabajadores y estudiantes universitarios del área a utilizar un vehículo personal que condiciona un mayor gasto para asegurar llegar a tiempo y no verse limitados por un tiempo incierto de espera. De esta misma forma muchas empresas que sitúan su fábrica fuera de lo que es Santiago y el territorio de Red Movilidad deben contratar un servicio privado de buses para traer a sus trabajadores.

### Descripción del Proyecto
La solución consiste en la instalación de un sistema físico de alerta lumínica temprana de bajo consumo en los paraderos. Haciendo uso de paneles solares y baterías recargables para funcionar de forma autosuficiente, sin depender de la red eléctrica centralizada. 
Al acercar la mano a un sensor, el usuario encenderá una luz LED que perdurará por 4 minutos a modo de anunciar su presencia al chofer en ruta de manera activa y dándole tiempo de reacción, si no se presenta ningún bus en ese tramo es cosa de volver a activar el artefacto.

### Estado del Proyecto
- **Versión actual:** v3.0
- **Última actualización:** 25/10/2026
- **Estado:** Prototipo inicial

---

##  Estructura del Repositorio
```
├── hardware/          # Circuitos, esquemas y BOM
├── software/          # Código Arduino y librerías
├── diseno_3d/        # Modelos Fusion 360 y renders
├── testing/          # Validación con usuarios
├── documentacion/    # Reportes y presentación
└── iteraciones/      # Historial de versiones
```

---

##  Inicio Rápido

### Requisitos Previos
- Arduino IDE 2.3.10
- Fusion 360
- ESP32
- Tira LED
- Panel solar 5V
- Protoboard
- HC-SR04 de 4 pines
- Cable micro usb con disponibilidad de conección/unión a panel solar
- Cable micro usb a usb

### Instalación
1. Clonar el repositorio
2. Instalar driver CP210x Universal Windows Driver
3. Descargar lector de ESP32
4. Instalar librería〈FastLED〉
5. Cargar código en ESP32 conectandola a un computador mediante USB
6. Acercar mano al sensor

---

##  Checklist de Entrega

### Hardware ✓
- [ ] Esquema del circuito (Fritzing/Wokwi)
- [ ] BOM completo
- [ ] Fotos de alta resolución

### Software ✓
- [ ] Código comentado
- [ ] Librerías documentadas
- [ ] Manual de instalación

### Diseño 3D ✓
- [ ] Archivos Fusion 360 (.f3d) con TODOS los componentes
- [ ] Renders de alta calidad (1+ ángulos)
- [ ] Planos técnicos

### Testing ✓
- [ ] Reporte de testing con usuarios (mín. 5)
- [ ] Evidencias fotográficas/videos
- [ ] Datos cuantitativos

### Documentación ✓
- [ ] Reporte final (máx. 15 páginas)
- [ ] Presentación (10 min)

---


---

##  Licencia
Este proyecto es desarrollado como parte del curso TEI201 - Facultad de Ingenieria y Ciencias - Universidad Adolfo Ibañez
