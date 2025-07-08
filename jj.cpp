#include <iostream>
using namespace std;

// ======= Estructura para configuración de minijuegos =======
struct ConfigMinijuegos {
    bool tesoro[5];
    bool simon[5];
    bool contar[5];
};

// ======= Ejemplo de funciones de minijuegos (sin librerías extrañas) =======

void minijuegoTesoro() {
    char tablero[3][3] = {
        {' ', ' ', ' '},
        {' ', 'T', ' '},
        {' ', ' ', ' '}
    };
    int fila, col;

    cout << "\n--- Minijuego: Busca el Tesoro ---\n";
    cout << "Encuentra el tesoro escondido en la matriz 3x3.\n";

    do {
        cout << "  0 1 2\n";
        for (int i = 0; i < 3; i++) {
            cout << i << " ";
            for (int j = 0; j < 3; j++) {
                cout << "* ";
            }
            cout << endl;
        }

        cout << "Elige fila (0-2): ";
        cin >> fila;
        cout << "Elige columna (0-2): ";
        cin >> col;

        if (fila < 0 || fila > 2 || col < 0 || col > 2) {
            cout << "Posición inválida. Intenta de nuevo.\n";
            continue;
        }

        if (tablero[fila][col] == 'T') {
            cout << "¡Encontraste el tesoro!\n";
            break;
        } else {
            cout << "Nada aquí. Sigue buscando.\n";
        }
    } while (true);

    cout << "Minijuego terminado.\n";
}

void minijuegoSimon() {
    char secuencia[3] = {'A', 'B', 'C'};
    char respuesta[3];

    cout << "\n--- Minijuego: Simón Dice ---\n";
    cout << "Memoriza esta secuencia: A B C\n";
    cout << "Cuando estés listo, ingresa la secuencia...\n";

    for (int i = 0; i < 3; i++) {
        cout << "Letra " << i + 1 << ": ";
        cin >> respuesta[i];
    }

    bool correcto = true;
    for (int i = 0; i < 3; i++) {
        if (respuesta[i] != secuencia[i]) {
            correcto = false;
            break;
        }
    }

    if (correcto) {
        cout << "¡Correcto! Superaste el reto.\n";
    } else {
        cout << "¡Secuencia incorrecta! Fallaste.\n";
    }

    cout << "Minijuego terminado.\n";
}

void minijuegoContar() {
    char tablero[4][4] = {
        {'O', 'X', 'O', ' '},
        {' ', 'O', ' ', 'X'},
        {'X', ' ', 'O', ' '},
        {' ', 'X', ' ', 'O'}
    };

    int contador = 0;
    cout << "\n--- Minijuego: Cuenta las O ---\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }

    cout << "¿Cuántas 'O' hay en el tablero? ";
    int respuesta;
    cin >> respuesta;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (tablero[i][j] == 'O')
                contador++;

    if (respuesta == contador) {
        cout << "¡Correcto! Contaste bien.\n";
    } else {
        cout << "¡Incorrecto! Había " << contador << " O.\n";
    }

    cout << "Minijuego terminado.\n";
}

// ======= Ejemplo de estructura y función de nivel (simplificada) =======
struct Nivel {
    string situacion;
};

struct Aventura {
    string nombre;
    Nivel niveles[5];
};

void jugarNivel(const Nivel& nivel) {
    cout << "\nSituación: " << nivel.situacion << "\n";
    cout << "Has tomado una decisión...\n";
}

// ======= Función genérica para jugar aventura con minijuegos =======
void jugarAventura(const Aventura& aventura, const ConfigMinijuegos& config) {
    cout << "\n--- Bienvenido a " << aventura.nombre << " ---\n";

    for (int i = 0; i < 5; i++) {
        cout << "\n--- Nivel " << i + 1 << " ---";
        jugarNivel(aventura.niveles[i]);

        if (config.tesoro[i]) {
            minijuegoTesoro();
        }
        if (config.simon[i]) {
            minijuegoSimon();
        }
        if (config.contar[i]) {
            minijuegoContar();
        }
    }

    cout << "\n¡Has completado la aventura!\n";
}

// ======= Ejemplo de aventuras =======
Aventura nerysia = {
    "Nerysia",
    {
        {"Situación 1"},
        {"Situación 2"},
        {"Situación 3"},
        {"Situación 4"},
        {"Situación 5"}
    }
};

Aventura infernum = {
    "Infernum",
    {
        {"Situación 1"},
        {"Situación 2"},
        {"Situación 3"},
        {"Situación 4"},
        {"Situación 5"}
    }
};

Aventura thornia = {
    "Thornia",
    {
        {"Situación 1"},
        {"Situación 2"},
        {"Situación 3"},
        {"Situación 4"},
        {"Situación 5"}
    }
};

// ======= Configuración por aventura =======
ConfigMinijuegos configNerysia = {
    {false, true, false, false, false}, // Tesoro en nivel 2
    {false, false, false, true, false}, // Simon en nivel 4
    {false, false, false, false, true}  // Contar en nivel 5
};

ConfigMinijuegos configInfernum = {
    {false, false, true, false, false}, // Tesoro en nivel 3
    {false, false, false, false, false}, // Simon no se usa
    {false, false, false, true, false}  // Contar en nivel 4
};

ConfigMinijuegos configThornia = {
    {false, false, false, false, false}, // Sin minijuegos
    {false, false, false, false, false},
    {false, false, false, false, false}
};

// ======= Main para probar =======
int main() {
    jugarAventura(nerysia, configNerysia);
    jugarAventura(infernum, configInfernum);
    jugarAventura(thornia, configThornia);
    return 0;
}
