// introduccion.h
#include <iostream>
#include <string>
using namespace std;

string nombreJugador; // Variable global para guardar el nombre del jugador

void introduccionJuego() {
    cout << "Antes de comenzar, dime tu nombre: ";
    cin.ignore(); // Limpiar el buffer por si quedó algo
    getline(cin, nombreJugador);
    cout << "\nMuy bien, " << nombreJugador << ". Prepárate para tu destino...\n";
}