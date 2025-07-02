[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/mi1WNrHU)
# Proyecto de C++ - ChronoCosmos



## Descripción del Proyecto

Este proyecto es un juego interactivo en el cual el jugador debe tomar decisiones en base a distintas aventuras, las situaciones deben ser resueltas correctamente para avanzar de nivel. Cada nivel representa un nuevo desafío que el jugador debe superar eligiendo entre diferentes opciones. Al avanzar con éxito los niveles, el jugador desbloquea “recompensas”. El objetivo final es completar todos los niveles con éxito y derrotar a los malos de cada aventura.

## Equipo

- **Nombre del equipo: PUNTO Y COMA** 

### Integrantes del equipo

1. **LUCIA GABRIELA NAVARRO MARIN**: 00109525

2. **HAZEL ANAHI MORALES GALVEZ**: 00050125
   
3. **GARY GEOVANNI SIBRIAN DERAS**: 00021925

4. **DANIELA BEATRIZ RAMOS PAZ**: 00113825


## Instrucciones de Ejecución

1. Clona este repositorio en tu máquina local, en el escritorio:
   ```bash
   git clone https://github.com/FDP-01-2025/project-punto-y-coma.git

2. Busca el archivo en la carpeta previamente clonada bajo el nombre [project-punto-y-coma].

3. Ábrelo en Visual Sutdio Code.

4. Crea una nueva terminal:
   ```bash
   g++ -o chronocosmos main.cpp

5. Ejecutalo y ¡DIVIERTETE!
   ```bash
   ./chronocosmos.exe


# 🌌 ChronoCosmos

## 🎮 Nombre del juego
**ChronoCosmos**

## 🌟 Temática y ambientación
ChronoCosmos es un juego narrativo de aventuras que transporta al jugador a universos fantásticos. Cada universo tiene una temática única:

- **Nerysia**: Un mundo marino pacífico amenazado por una entidad oscura.
- **Infernum**: Un reino volcánico en peligro rodeado de amenazas y llamas asfixiantes.
- **Thornia**: Un mundo sumergido en las penumbras del oscuro olvido y memorias perdias.

El jugador debe restaurar el equilibrio de cada universo tomando decisiones clave que lo llevarán 
por diferentes caminos.

## ⚔️ Mecánica principal
- El jugador ingresa su nombre y selecciona una aventura.
- Cada aventura contiene **5 niveles**, cada uno con una situación crítica.
- En cada nivel se presentan **3 opciones** con consecuencias diferentes.
- Si elige la opción correcta, gana un **premio**; si no, sobrevive sin premio.
- Los premios obtenidos y aventuras jugadas se almacenan para que puedan revisarse en cualquier momento.
- Las aventuras solo pueden jugarse **una vez**.

## 🎮 Jugabilidad
El juego es completamente interactivo desde la consola. Se centra en decisiones narrativas, fomentando la exploración y el razonamiento.

## 💡 Aplicación de temas vistos en clase

### ✔️ Estructuras
- `struct Decision`: Guarda el texto de la opción y su consecuencia.
- `struct Nivel`: Contiene la situación, decisiones, premio y la opción ganadora.
- `struct Aventura`: Contiene el nombre de la aventura y los niveles.

### ✔️ Arreglos
- Arreglo de decisiones por nivel: `Decision decisiones[3]`
- Arreglo de niveles por aventura: `Nivel niveles[5]`
- Arreglo de premios: `string premiosJugador[20]`

### ✔️ Archivos
- Funciones para **guardar** y **leer** progreso usando `ofstream` y `ifstream`.

