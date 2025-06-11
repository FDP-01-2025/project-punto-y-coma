#include <iostream>
using namespace std;

// Constantes para configurar el juego
const int AVENTURAS = 3;
const int NIVELES = 5;
const int OPCIONES = 3;

// Matriz? para guardar las recompensas por aventura y nivel
 // ejemplo: recompensas[AVENTURAS][NIVELES];

// Matriz que indica si un premio ha sido desbloqueado (0 = no, 1 = sí)
int premiosDesbloqueados[AVENTURAS][NIVELES] = { 0 };

// Matriz que defina cuál es la opción correcta en cada nivel de cada aventura
// ejemplo: decisionesCorrectas[AVENTURAS][NIVELES];

// Prototipos de funciones
void mostrarMenu();
void jugar();
void verPremios();
void iniciarAventura(int num);
void inicializarDecisionesCorrectas();

int main() {


    int opcion;
    do {
        mostrarMenu();      // Mostrar el menú principal
        cin >> opcion;      // Leer la opción del jugador

        switch (opcion) {// switch de opciones
            case 1:
                jugar();    // Jugar una aventura
                break;
            case 2:
                verPremios(); // Ver premios desbloqueados
                break;
            case 3:
                cout << "Gracias por jugar. ¡Hasta pronto!" << endl;
                break;
            default:
                cout << "Opción inválida. Intenta de nuevo." << endl;
        }
    } while (opcion != 3); // El juego se repite mientras no se elija salir

    return 0;
}

// Mostrar el menú principal del juego
void mostrarMenu() {
}

// Iniciar el juego: seleccionar una aventura
void jugar() {
   
}

// Iniciar la aventura específica que escogio el usuario
void iniciarAventura(int num) {

    int nivel = 0;

    // El juego debria continuar mientras no se superen los 5 niveles
    while (nivel < NIVELES) {
        cout << "\n--- Aventura " << num + 1 << ", Nivel " << nivel + 1 << " ---" << endl;
        cout << "Situación: *aqui ponemos la situacion del nivel * \n Tienes tres opciones, elige sabiamente.\n";

        // Mostrar las opciones disponibles
        for (int i = 0; i < OPCIONES; ++i) {
            cout << i + 1 << ". " << decisiones [/*arreglo de decisiones*/i] << endl;
        }

        int eleccion;
        cout << "Elige una opción (1-3): ";
        cin >> eleccion;

        // Validar si la decisión fue la correcta
        if (eleccion == decisionesCorrectas) {
            cout << "¡Buena elección! Avanzas al siguiente nivel." << endl;

            // Guardamos que el jugador desbloqueó ese nivel
            

            // Creamos una recompensa por nivel

            nivel++; // Pasamos al siguiente nivel
        } else {
            cout << "Mala decisión. La aventura se reinicia desde el principio." << endl;
            nivel = 0; // Reinicio de niveles o que se repita el nivel en el que va ? 
        }
    }

    cout << "\n¡Felicidades! Completaste la aventura " << num + 1 << "." << endl;
}

// Ver todos los premios desbloqueados por el jugador
void verPremios() {
  
}

// Inicializamos el arreglo o matriz con las decisiones correctas por nivel y aventura
void inicializarDecisionesCorrectas() {
    //  asignamos manualmente qué opción es correcta (1, 2 o 3)

}
