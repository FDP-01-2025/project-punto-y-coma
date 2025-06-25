#ifndef STRUCTS_H
#define STRUCTS_H
#include <string>
using namespace std;

struct Decision {
    string texto;
    string consecuencia;
};

struct Nivel {
    string situacion;
    Decision decisiones[3];
    string premio;
    int opcionGanadora;
};

struct Aventura {
    string nombre;
    Nivel niveles[5];
};

#endif
