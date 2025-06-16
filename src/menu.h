//menu.h
#include <iostream>
#include <intro.h>
#include <nerysia.h>
#include <infernum.h>
#include <thornia.h>
using namespace std;

void mostrarMenu() {
    int opcion;

    cout << "\n================ CHRONOCOSMOS ================\n";
    cout << "Has caído en un vacío, un lugar oscuro y frío...\n";
    cout << "Una luz morada aparece, te envuelve y te guía...\n";
    cout << "Te lleva a un lugar lleno de estrellas...\n";
    cout << "Cada estrella es una aventura distinta que debes vivir.\n";
    cout << "\nBienvenido, jugador.\n\n";

    introduccionJuego(); // Se llama para que el jugador ingrese su nombre y comience

    do {
        cout << "\nElige una aventura para comenzar:\n";
        cout << "1. Universo de Agua - Nerysia\n";
        cout << "2. Universo de Fuego - Infernum\n";
        cout << "3. Mundo Postapocalíptico - Thornia\n";
        cout << "4. Ver premios obtenidos\n";
        cout << "5. Salir del juego\n";
        cout << "\nIngresa tu opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                jugarNerysia();
                break;
            case 2:
                jugarInfernum();
                break;
            case 3:
                jugarThornia();
                break;
            case 4:
                mostrarRecompensas();
                break;
            case 5:
                cout << "Gracias por jugar ChronoCosmos. ¡Hasta pronto!\n";
                break;
            default:
                cout << "Opción inválida. Intenta de nuevo.\n";
        }

    } while(opcion != 5);
}
