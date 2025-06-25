#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H
//estos ifndef se usan para que no se repita el codigo y pueda compilar bien
#include <iostream>
using namespace std;

// representa una decision dentro de un nivel
struct Decision {
    string texto;
    string consecuencia;
};

// representa un nivel del juego
struct Nivel {
    string situacion;
    Decision decisiones[3];
    string premio;
    int opcionGanadora;
};

// representa una aventura completa
struct Aventura {
    string nombre;
    Nivel niveles[5];
};
#endif