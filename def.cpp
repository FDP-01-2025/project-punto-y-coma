#include "header.h"
#include <iostream>
#include <fstream>

// Variables globales
bool aventurasJugadas[3] = {false, false, false};
string premiosJugador[20];
int cantidadPremios = 0;
string nombreJugador;

// Aventuras definidas

//aventura uno
Aventura nerysia = {
    "Nerysia (Mundo de Agua)",
    {
        {"SITUACION.", 
            {{"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA"}},
        "PREMIO", 2},//este dos representa la opcion correcta del 1 al 3

        {"SITUACION.",
            {{"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."}},
        "PREMIO", 0},

        {"SITUACION.",
            {{"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."}},
        "PREMIO", 1},

        {"SITUACION.",
            {{"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."}},
        "PREMIO", 1},

        {"SITUACION.",
            {{"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."},
             {"OPCION", "CONSECUENCIA."}},
        "PREMIO", 2}
    }
};
//aventura dos
Aventura infernum = {
   
};
//aventura tres
Aventura thornia = {
    
};

// Funciones
//agrega premio segun gane
void agregarPremio(string premio) {
    if (cantidadPremios < 20) {//si la cantidad es menor a 20 premios
        premiosJugador[cantidadPremios++] = premio; //se guarda en el arreglo sumando los premios
    }
    
}
//muestra los premios que ha obtenido
void mostrarPremios() {
    cout << "\n--- Premios obtenidos ---\n";
    if (cantidadPremios == 0) {//si la cantidad de premios es igual a cero muestra el mensaje
        cout << "No tienes premios aún.\n";
    } else {
        for (int i = 0; i < cantidadPremios; i++) { //si tiene premio entonces se recorre el arreglo y se muestran los premio ganados
            cout << i + 1 << ". " << premiosJugador[i] << "\n";
        }
    }
    cout << endl;
}
//guardar progresoo
void guardarProgreso() {
    ofstream archivo("src./progreso.txt");
    if (archivo.is_open()) {
        archivo << nombreJugador << endl;
        
        // Contar cuántas aventuras jugó
        int totalAventuras = 0;
        for (int i = 0; i < 3; i++) {
            if (aventurasJugadas[i]) {
                totalAventuras++;
            }
        }
        archivo << totalAventuras << endl;

        // Guardar nombres de aventuras jugadas
        if (aventurasJugadas[0]) archivo << "Nerysia (Mundo de Agua)" << endl;
        if (aventurasJugadas[1]) archivo << "Infernum (Mundo de Fuego)" << endl;
        if (aventurasJugadas[2]) archivo << "thornia (El mundo olvidado)" << endl;

        // Guardar premios
        archivo << cantidadPremios << endl;
        for (int i = 0; i < cantidadPremios; i++) {
            archivo << premiosJugador[i] << endl;
        }

        archivo.close();
        cout << "\nProgreso guardado exitosamente.\n";
    } else {
        cout << "No se pudo abrir el archivo para guardar.\n";
    }
}
//mostrar progreso
void mostrarProgreso() {
    ifstream archivo("src/progreso.txt");
    if (archivo.is_open()) {
        string linea;
        getline(archivo, nombreJugador);
        cout << "\nNombre: " << nombreJugador << endl;

        getline(archivo, linea);
        int aventuras = stoi(linea);
        cout << "Aventuras jugadas: " << aventuras << endl;

        cout << "\n--- Aventuras jugadas ---\n";
        for (int i = 0; i < aventuras; i++) {
            getline(archivo, linea);
            cout << i + 1 << ". " << linea << endl;
        }

        getline(archivo, linea);
        cantidadPremios = stoi(linea);

        cout << "\n--- Premios obtenidos ---\n";
        if (cantidadPremios == 0) {
            cout << "No tienes premios aún.\n";
        } else {
            for (int i = 0; i < cantidadPremios; i++) {
                getline(archivo, premiosJugador[i]);
                cout << i + 1 << ". " << premiosJugador[i] << endl;
            }
        }

        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para leer el progreso.\n";
    }
}
//jugar nivel de aventura
void jugarNivel(const Nivel& nivel) {
    cout << "\nSituacion: " << nivel.situacion << "\n";
    for (int i = 0; i < 3; i++) { //si los niveles son menores a 3
        cout << i + 1 << ". " << nivel.decisiones[i].texto << "\n"; //manda el arreglo de decisiones
    }

    int opcion;//declaramos un entero para la opcion de las decisiones
    do {
        cout << "Elige una opcion: ";
        cin >> opcion;
        if (opcion < 1 || opcion > 3) { //una condicional que elija solamente entre la opcion  1 a 3
            cout << "Opcion invalida. Intenta de nuevo.\n";
        }
    } while (opcion < 1 || opcion > 3); //todo eso lo hara mientras sean esas opciones

    cout << "\n" << nivel.decisiones[opcion - 1].consecuencia << "\n"; //mostramos el arreglo de opciones -1 y la consecuencia que es correspndiente

    if ((opcion - 1) == nivel.opcionGanadora) { //si la opcion que eligio es igual a la opcion ganadora muestra el mensaje
        cout << "¡Ganaste el premio: " << nivel.premio << "!\n";
        agregarPremio(nivel.premio); // agregamos premio al arreglo
    } else {
        cout << "Sobreviviste, pero sin premio.\n";
    }
}
//funcion de jugar aventura 
void jugarAventura(const Aventura& aventura) {
    cout << "\n--- Bienvenido a " << aventura.nombre << " ---\n";
    for (int i = 0; i < 5; i++) { //recorremos el arreglo de la funcion 
        cout << "\n--- Nivel " << i + 1 << " ---";
        jugarNivel(aventura.niveles[i]);
    }
    cout << "\n¡Has completado la aventura!\n";
    
    
}

void intentarJugarAventura(const Aventura& aventura, int indiceAventura) {
    if (indiceAventura < 0 || indiceAventura >= 3) {
        cout << "Indice de aventura invalido.\n";
        return;
    }
    if (aventurasJugadas[indiceAventura]) {
        cout << "\nYa jugaste la aventura \"" << aventura.nombre << "\" anteriormente.\n";
    } else {
        jugarAventura(aventura);
        aventurasJugadas[indiceAventura] = true;
    }
}

void introduccionJuego() {
    cout << "Antes de comenzar, dime tu nombre: ";
    cin >> nombreJugador;
    cout << "\nMuy bien, " << nombreJugador << ". Preparate para tu destino...\n";
}