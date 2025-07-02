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
        "PREMIO", 2},
    }
};

//aventura dos
Aventura infernum = {
    "Infernum (Mundo de Fuego)",
    {
        {"Nivel 1 - Llanuras de ceniza: El suelo tiembla bajo tus pies, unos lagartos ígneos han comenzado a atacar caravanas de comerciantes de roca volcánica. ¿Que haces para salvar a los comerciantes?",
             {{"Tratas de hablar con los lagartos", "Los lagartos no entienden y se alteran aún más."},
              {"Les arrojas agua congelada", "Los lagartos se enfurecen y comienzan atacar a todos."},
              {"Los distraes con una antorcha brillante", "Los lagartos se confunden con la luz y se quedan quietos, salvando a los comerciantes."}},
        "Espada de lava", 2},

        {"Nivel 2 - Cañón del Trueno Ardiente: Encuentras una grieta con vapor envenenado que está afectando a los pájaros de lava. Algunos te rodean confundidos. ¿Que decision tomas para ayudar a los pajaros?",
             {{"Tapa la grieta con rocas", "La presión al taparla provoca una explosión y todos mueren." },
             {"Guias a los pájaros fuera del humo", "Salvas a los pajaros y te agradecen con un pan para recargar energias."},
             {"Los enfrentas, pensando que son hostiles", "Los pajaros te atacan."}},
        "corazon de fuego encantado", 1},

        {"Nivel 3 - Volcán Dormido: Subes a un volcán para investigar su energía. Descubres una grieta que lleva a una caverna secreta, pero está protegida por golems de magma. ¿Como accedes? a la caverna secreta?",
             {{"Imitas los movimientos de los golems", "Te confunden con uno de ellos y te dejan pasar."},
             {"Te camuflas con barro volcánico", "El barro te quema y mueres."},
             { "Esperas a que se duerman para pasar", "Te duermes y los golems te atrapan"}},
        "Cetro de magma", 0}, 

        {"Nivel 4 - Río de Lava Eterna: Para cruzar al siguiente territorio, debes atravesar un río de lava sobre plataformas que se derriten con el tiempo. ¿Como logras cruzar el rio?",
             {{"Un caparazón de escarabajo ignífugo", "Te proteges de la lava y cruzas sin problemas"},
             {"Saltar lo más rapido posible", "Te quemas porque no alcanzas a saltar."},
             {"Usar un fragmento de hielo antiguo para congelar partes de la lava", "El hielo se derrite muy rapido y caes al rio"}},
       "Escudo de roca volcanica", 0},

       {"Nivel 5 - Núcleo del Coloso Ardiente: En lo más profundo del mundo, te enfrentas al Coloso Ardiente, una criatura que parece hecha del núcleo del planeta. Está enloquecido. ¿Como derrotas al coloso?",
             {{"Usas un mineral especial que absorbe calor", "El mineral es muy debil y se derite."},
              {"Le haces recordar quién era antes con un artefacto antiguo", "El coloso se conmueve y se duerme en paz."},
              {"Intentas luchar contra el coloso", "El coloso es demasiado fuerte y te aplasta"}},
        "Amuleto del coloso", 1},
     }                  
};

<<<<<<< HEAD

//aventura tres
Aventura thornia = {
    
=======
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
        { "Sales de la cueva por el portal y encuentras una torre que susurra tus pensamientos sin sesar. ",
          { {"Te quedas en silencio. ", "No logras soportar la voz de tus pensamientos y pierdes cordura. "},
            {"Subes a la cima de la torre. ", "No encuentras nada y regresas. "},
            {"Investigas debajo de la torre acercandote a los susurros. ", "Encuentras entrada subterrania y un cofre. "}
          },
          "Hacha en mal estado", 3 },
        { "Al descender encuentras una sala con 3 estatuas encapuchadas con diferentes simbolos.",
          { {"Tocar primer estatua con un simbolo cuadrado. ", "Activas una trampa y no escapaste a tiempo. "},
            {"Tocar segunda estatua con un simbolo circular. ", "Aparece una neblina y terminas inconciente. "},
            {"Tocar tercera estatua con simbolo triangular. ", "La estatua se desplaza y abre un camino atras de ella y te llevas su capucha. "}
          },
          "Capucha vieja. ", 3 },
        { "Sigues el camino y te encuentras una sala oscura llena de armas con escombros y puerta con simbolos en las paredes. ",
          { {"Investiga los escombros. ", "Encuentras un libro en otro idioma. "},
            {"Fuerzas la puerta con el escudo. ", "No logras nada. "},
            {"Investigas los simbolos en las paredes. ", "Reaccionan con la capucha y se abre ante ti la puerta. "}
          },
          "Libro desconocido. ", 3 },
        { "Continuara.",
          { {"Pelea o algo", "sigilo."},
            {"atributos", "ganas un arma ."},
            {"Escapar con un artefacto robado", "Obtienes una maldicion."}
          },
          "maldicion", 0 }// no le pongan atencion al ultimo lo puse por poner falta plantear
}
>>>>>>> c7ed183db97085e7cf0c39188786d39b231d1ff4
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