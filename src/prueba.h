#include <iostream>
using namespace std;

// Constantes
const int NIVELES = 5;
const int OPCIONES = 3;
const int AVENTURAS = 3;

// Datos genéricos
string decisiones[AVENTURAS][NIVELES][OPCIONES] = {
    { // Aventura 1: Nerysia
        {"Un calamar gigante", "Un grupo de tortugas marinas", "Un delfin solitario muy veloz"},
        {"Tiburones dormidos", "Medusas guardianas", "Corriente venenosa"},
        {"Arenas movedizas", "Burbujas mágicas", "Cangrejos gigantes"},
        {"Pulpo sabio", "Sirenas engañosas", "Cuevas siniestras"},
        {"Reina Nerysia", "Bestia abisal", "Cristal maldito"}
    },
    { // Aventura 2: Fuego
        {"Rocas flotantes", "Lava viva", "Fénix de fuego"},
        {"Dragones pequeños", "Golems ardientes", "Aire abrasador"},
        {"Volcán dormido", "Puente fundido", "Lagartijas mágicas"},
        {"Templo ardiente", "Guardianes ígneos", "Esferas de magma"},
        {"Coloso Ardiente", "Núcleo ígneo", "Eclipse volcánico"}
    },
    { // Aventura 3: Postapocalíptico
        {"Hiedra venenosa", "Flor sanadora", "Raíz explosiva"},
        {"Árbol sabio", "Zarzas engañosas", "Planta carnívora"},
        {"Espejismo verde", "Refugio oculto", "Zona radioactiva"},
        {"Aliado mutante", "Bestia camuflada", "Ruinas vivientes"},
        {"Árbol supremo", "Origen mutante", "Semilla del fin"}
    }
};

string consecuencias[AVENTURAS][NIVELES][OPCIONES] = {
    {
        {"El calamar te impulsa con fuerza.", "Las tortugas te llevan con agilidad.", "El delfín atraviesa veloz las corrientes."},
        {"Los tiburones se despiertan, escapas apenas.", "Las medusas se abren paso para ti.", "La corriente te arrastra, pero sobrevives."},
        {"Caes en las arenas, pero alguien te salva.", "Las burbujas te elevan a salvo.", "Los cangrejos te atacan, escapas herido."},
        {"El pulpo te da sabiduría.", "Las sirenas te engañan.", "Las cuevas te confunden pero sales."},
        {"La reina te otorga su poder.", "Derrotas a la bestia, pero quedas débil.", "El cristal te da visión, pero te consume lentamente."}
    },
    {
        {"Las rocas te ayudan a cruzar.", "La lava intenta tragarte.", "El Fénix te transporta volando."},
        {"Los dragones huyen contigo.", "Los golems te atacan.", "El aire te empuja fuera del camino."},
        {"El volcán despierta.", "El puente se desmorona.", "Las lagartijas te guían."},
        {"El templo revela un secreto.", "Los guardianes te detienen.", "Las esferas explotan a tu paso."},
        {"El coloso ruge mientras luchas.", "El núcleo casi te quema.", "El eclipse cambia el mundo."}
    },
    {
        {"Te enredas, pero sobrevives.", "La flor cura tus heridas.", "La raíz te da un arma."},
        {"El árbol te aconseja.", "Las zarzas te atrapan.", "La planta intenta devorarte."},
        {"Caes en un engaño.", "Te refugias y recuperas fuerzas.", "Te contaminas, pero aguantas."},
        {"El mutante te salva.", "La bestia huye de ti.", "Las ruinas intentan tragarte."},
        {"El árbol te transforma.", "Descubres el origen.", "La semilla provoca un renacer."}
    }
};

string premios[AVENTURAS][NIVELES] = {
    {"Perla mágica", "Escama dorada", "Tridente perdido", "Coral sabio", "Corona de Nerysia"},
    {"Pluma ígnea", "Piedra volcánica", "Capa de magma", "Espada ardiente", "Corazón de fuego"},
    {"Semilla brillante", "Flor del tiempo", "Cristal mutante", "Máscara de sobreviviente", "Raíz del renacimiento"}
};

// Mostrar consecuencias
void mostrarConsecuenciaGenerica(int aventura, int nivel, int opcion) {
    if (opcion >= 1 && opcion <= 3) {
        cout << "\n" << consecuencias[aventura][nivel][opcion - 1] << endl;
    } else {
        cout << "\nOpcion invalida.\n";
    }
}

// Jugar un nivel genérico
void jugarNivel(int aventura, int nivel) {
    int opcion;
    cout << "\nNivel " << (nivel + 1) << ": ¿Qué eliges?\n";
    for (int i = 0; i < OPCIONES; i++) {
        cout << (i + 1) << ". " << decisiones[aventura][nivel][i] << endl;
    }

    do {
        cout << "Tu opción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3) {
            mostrarConsecuenciaGenerica(aventura, nivel, opcion);
            if (opcion == 2) { // Solo opción 2 da premio
                cout << "¡Has ganado el premio: " << premios[aventura][nivel] << "!\n";
            } else {
                cout << "Sobreviviste al nivel, pero sin premio.\n";
            }
        } else {
            cout << "Opción inválida. Intenta de nuevo.\n";
        }
    } while (opcion < 1 || opcion > 3);
}

// Jugar una aventura completa
void jugarAventura(int aventura) {
    cout << "\n--- Iniciando Aventura " << (aventura + 1) << " ---\n";
    for (int nivel = 0; nivel < NIVELES; nivel++) {
        jugarNivel(aventura, nivel);
    }
    cout << "\n¡Aventura completada!\n";
}
