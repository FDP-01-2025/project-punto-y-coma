#include <iostream>
using namespace std;

/*void minijuegoMemoria() {
    char tablero[2][2] = {{'A', 'B'}, {'B', 'A'}};
    char visible[2][2] = {{'*', '*'}, {'*', '*'}};

    int f1, c1, f2, c2;

    cout << "\n--- Minijuego de Memoria (versión fija) ---\n";
    cout << "Encuentra el par igual para ganar un premio.\n";

    do {
        // Mostrar tablero visible
        cout << "  0 1\n";
        for (int i = 0; i < 2; i++) {
            cout << i << " ";
            for (int j = 0; j < 2; j++) {
                cout << visible[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Selecciona primera carta (fila y columna): ";
        cin >> f1 >> c1;
        cout << "Selecciona segunda carta (fila y columna): ";
        cin >> f2 >> c2;

        // Mostrar temporalmente
        visible[f1][c1] = tablero[f1][c1];
        visible[f2][c2] = tablero[f2][c2];

        cout << "\nTablero actualizado:\n";
        cout << "  0 1\n";
        for (int i = 0; i < 2; i++) {
            cout << i << " ";
            for (int j = 0; j < 2; j++) {
                cout << visible[i][j] << " ";
            }
            cout << endl;
        }

        if (tablero[f1][c1] == tablero[f2][c2]) {
            cout << "¡Encontraste el par!\n";
            break;
        } else {
            cout << "No son iguales, intenta de nuevo.\n";
            visible[f1][c1] = '*';
            visible[f2][c2] = '*';
        }

    } while (true);

    cout << "Minijuego terminado.\n";
}
    hola te falta validar caracteres papu*/


/*void minijuegoTesoro() {
    char tablero[3][3] = {
        {' ', ' ', ' '},
        {' ', 'T', ' '},
        {' ', ' ', ' '}
    };

    int fila, col;

    cout << "\n--- Minijuego: Busca el Tesoro ---\n";
    cout << "Encuentra el tesoro escondido en la matriz 3x3.\n";

    do {
        // Mostrar tablero
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

        if (tablero[fila][col] == 'T') {
            cout << "¡Encontraste el tesoro!\n";
            break;
        } else {
            cout << "Nada aquí. Sigue buscando.\n";
        }
    } while (true);

    cout << "Minijuego terminado.\n";
} 
    validar caracteres papu */

/*void minijuegoSimon() {
    char secuencia[3] = {'A', 'B', 'C'};
    char respuesta[3];

    cout << "\n--- Minijuego: Simón Dice ---\n";
    cout << "Memoriza esta secuencia: A B C\n";

    // Mostrar la secuencia
    cout << "Presiona enter cuando estés listo...";
    cin.ignore();
    cin.get();

    // Borrar pantalla (opcional, puedes pedir al jugador que no mire)
    for (int i = 0; i < 20; i++) cout << endl;

    cout << "Ingresa la secuencia (3 letras): \n";
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
validar mayus y minus y numeros*/
#include <iostream>
using namespace std;

void minijuegoContar() {
    char tablero[4][4] = {
        {'O', 'X', 'O', ' '},
        {' ', 'O', ' ', 'X'},
        {'X', ' ', 'O', ' '},
        {' ', 'X', ' ', 'O'}
    };

    int contador = 0;

    cout << "\n--- Minijuego: Cuenta las O ---\n";

    // Mostrar tablero
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }

    cout << "¿Cuántas 'O' hay en el tablero? ";
    int respuesta;
    cin >> respuesta;

    // Contar las O
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

// Función main obligatoria
int main() {
    //minijuegoMemoria();
   // minijuegoTesoro();
   // minijuegoSimon();
   minijuegoContar();
    return 0;
}