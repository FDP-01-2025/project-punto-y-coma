// introduccion.h
#include <iostream>
using namespace std;

string nombreJugador; // Variable global para guardar el nombre del jugador

void introduccionJuego() {
    cout << "Antes de comenzar, dime tu nombre: ";
    cin >> nombreJugador;
    cout << "\nMuy bien, " << nombreJugador << ". Prepárate para tu destino...\n";
}
