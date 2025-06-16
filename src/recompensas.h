#include <iostream>
using namespace std;

// Recompensas para cada mundo
const char premiosNerysia[4][50] = {
    "Perla del Valor",
    "Tridente de Coral",
    "Amuleto de Nerysia",
    "Tinta Sagrada"
};

const char premiosInfernum[4][50] = {
    "Llama de los Antiguos",
    "Mapa del Nucleo",
    "Roca Flotante",
    "Escama de Dragon"
};

const char premiosThornia[4][50] = {
    "Esencia Floral",
    "Melodia Mental",
    "Extractor de Esporas",
    "Raiz de Vida"
};

// Array para almacenar todos los premios ganados
char premiosObtenidos[12][50];
int cantidadPremios = 0;

// Funcion para guardar los premios desbloqueados
void agregarPremio(const char premio[50]) {
    if (cantidadPremios < 12) {
        
       for (int i = 0; i < 50; i++) {
    premiosObtenidos[cantidadPremios][i] = premio[i];
    if (premio[i] == '\0') break; // parar cuando termina el texto
}

    }
}

// Mostrar premios obtenidos al final del juego
void mostrarPremios() {
    cout << "\n--- Camino Recorrido: Premios Desbloqueados ---\n";
    for (int i = 0; i < cantidadPremios; i++) {
        cout << i + 1 << ". " << premiosObtenidos[i] << endl;
    }
} 
