#include "header.h"
#include <iostream>
#include <fstream>

// Variables globales
bool aventurasJugadas[3] = {false, false, false};
string premiosJugador[20];
int cantidadPremios = 0;
string nombreJugador;

// Aventuras definidas

Aventura nerysia = {
    "Nerysia (Mundo de Agua)",
    {
        {"Los peces globo atacan la aldea.", 
            {{"Usar espinas", "Asustas a los peces y se van."},
             {"Usar espada", "Te lastimas pero logras defenderte."},
             {"Usar tinta", "Los confundes y huyen asustados."}},
        "Perla brillante", 2},

        {"Un tiburon bloquea el paso.",
            {{"Calmarlo", "Logras calmarlo y se hace tu aliado."},
             {"Huir", "Escapas pero pierdes provisiones."},
             {"Pelear", "Lo vences pero quedas herido."}},
        "Cola de sirena", 0},

        {"Corrientes peligrosas te arrastran.",
            {{"Nadar contra corriente", "Gastas energia pero sobrevives."},
             {"Buscar refugio", "Encuentras una cueva segura."},
             {"Dejarse llevar", "Te alejas demasiado del objetivo."}},
        "Concha magica", 1},

        {"Encuentras un cofre cerrado.",
            {{"Forzarlo", "Se rompe y pierdes parte del tesoro."},
             {"Buscar la llave", "Encuentras la llave y abres sin daño."},
             {"Ignorarlo", "Te pierdes el tesoro pero sigues sano."}},
        "Perla negra", 1},

        {"Una gran medusa aparece.",
            {{"Atacar", "La derrotas con dificultad."},
             {"Esquivar", "Logras esquivarla ileso."},
             {"Dialogar", "Sorprendentemente te ayuda."}},
        "Tridente marino", 2}
    }
};

Aventura infernum = {
    "Infernum (Mundo de Fuego)",
    {
        {"El volcan comienza a rugir.",
            {{"Escalar", "Subes rapido pero te quemas."},
             {"Esperar", "El volcan se calma un poco."},
             {"Buscar ruta alterna", "Encuentras un camino seguro."}},
        "Gema ardiente", 2},

        {"Un golem de lava te ataca.",
            {{"Luchar", "Ganas pero te quemas."},
             {"Usar agua", "Lo derrotas sin daño."},
             {"Huir", "Escapas con heridas leves."}},
        "Escama bonita", 1},

        {"Rocas incandescentes bloquean el paso.",
            {{"Saltar", "Cruzas con riesgo alto."},
             {"Romperlas", "Requiere fuerza y tiempo."},
             {"Rodear", "Tomas camino largo pero seguro."}},
        "Anillo volcanico", 2},

        {"Encuentras un lago de lava.",
            {{"Construir puente", "Tarda pero cruzas bien."},
             {"Volar sobre el", "Cruzas rapido con magia."},
             {"Atravesar directo", "Te quemas gravemente."}},
        "Pluma fenix", 1},

        {"El coloso ardiente aparece.",
            {{"Atacar frontal", "Lo vences con gran esfuerzo."},
             {"Debilitar primero", "Lo haces vulnerable y vences."},
             {"Huir", "Te salvas pero pierdes mucho."}},
        "Corona brillante", 1}
    }
};

Aventura thornia = {//declaramos el la aventura a la que vamos a añadirle datos
    "thornia (El mundo olvidado)",//nombre de la aventura como en la estructura pide
    {
//situación 1 (nivel 1)
        { "Despiertas en unas ruinas cubiertas de niebla y una estatua emite un sonido.", 
//decisión y consecuencia
          { {"Tocar la estatua", "Te paralisas unos segundos y pierdes tiempo."}, 
//decisión y consecuencia
            {"Tocar simbolo en forma de triangulo en la pared", "Aparece portal de luz ante ti."}, 
//decisión y consecuencia
            {"Caminar hacia la niebla", "Escuchas unos murmuros y te alejas."}
          },
//premio obtenido y opcion que te da ese premio
          "Escudo abismal", 2 },
//repetimos la estructura para los niveles siguientes
//todo esto es un ejemplo
        { "Sales de la cueva por el portal y encuentras una torre que susurra tus pensamientos sin sesar.",
          { {"Te quedas en silencio.", "No logras soportar la voz de tus pensamientos y pierdes cordura."},
            {"Subes a la cima de la torre.", "No encuentras nada y regresas."},
            {"Investigas debajo de la torre acercandote a los susurros", "Encuentras entrada subterrania y un cofre."}
          },
          "Hacha en mal estado", 3 },
        { "       .",
          { {"      ", "      ."},
            {"      ", "     ."},
            {"     ", "       ."}//todo lo de espacio trabajare
          },
          "   ", 3 },
        { " .",
          { {"   ", "."},
            {" ", " ."},
            {"   ", "  ."}
          },
          "    ", 3 },
        { "Continuara.",
          { {"Pelea o algo", "sigilo."},
            {"atributos", "ganas un arma ."},
            {"Escapar con un artefacto robado", "Obtienes una maldicion."}
          },
          "maldicion", 0 }// no le pongan atencion al ultimo lo puse por poner falta plantear
}
};


// Funciones
void agregarPremio(string premio) {
    if (cantidadPremios < 20) {
        premiosJugador[cantidadPremios++] = premio;
    }
}

void mostrarPremios() {
    cout << "\n--- Premios obtenidos ---\n";
    if (cantidadPremios == 0) {
        cout << "No tienes premios aún.\n";
    } else {
        for (int i = 0; i < cantidadPremios; i++) {
            cout << i + 1 << ". " << premiosJugador[i] << "\n";
        }
    }
    cout << endl;
}

void jugarNivel(const Nivel& nivel) {
    cout << "\nSituacion: " << nivel.situacion << "\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << nivel.decisiones[i].texto << "\n";
    }

    int opcion;
    do {
        cout << "Elige una opcion: ";
        cin >> opcion;
        if (opcion < 1 || opcion > 3) {
            cout << "Opcion invalida. Intenta de nuevo.\n";
        }
    } while (opcion < 1 || opcion > 3);

    cout << "\n" << nivel.decisiones[opcion - 1].consecuencia << "\n";

    if ((opcion - 1) == nivel.opcionGanadora) {
        cout << "¡Ganaste el premio: " << nivel.premio << "!\n";
        agregarPremio(nivel.premio);
    } else {
        cout << "Sobreviviste, pero sin premio.\n";
    }
}

void jugarAventura(const Aventura& aventura) {
    cout << "\n--- Bienvenido a " << aventura.nombre << " ---\n";
    for (int i = 0; i < 5; i++) {
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