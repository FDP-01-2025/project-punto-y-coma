#include "header.h"
#include <iostream>
#include <fstream>

// Variables globales
bool aventurasJugadas[3] = {false, false, false};
string premiosJugador[20];
int cantidadPremios = 0;
string nombreJugador;

// Defined adventures
// adventure one
Aventura nerysia = {
    "Nerysia (Water World)",
    {
        // Level 1 – Coral Reef
        { "The pufferfish have found their home destroyed. They are furious and are attacking the octopus village.\nWhat weapon do you recommend using?",
          { 
              {"Their spines", "The fish get confused and stop attacking for a moment."},
              {"A sword", "The sword is useless underwater, you waste time."},
              {"The octopus ink", "The ink blinds them and they manage to escape in time."}
          },
          "Ancient Ink", 1 },
          // Level 2 – Eternal Algae Caves
        { "As you move through a cave covered in glowing algae, you hear a hypnotic singing. You realize it comes from dark mermaids trying to distract you to steal your life energy.",
          {
              {"You follow the singing, maybe it leads to a clue", "You get hypnotized and lose energy."},
              {"You cover your ears with algae", "You resist the song and move forward successfully."},
              {"You throw a stone toward the sound to distract them", "You confuse them and manage to escape unseen."}
          },
          "Luminous Pearl", 2 },
          // Level 3 – Abyssal Trench of Oblivion
        { "You reach an area so deep that light disappears. You find an old fish trapped in a black coral cage begging for help.",
          {
              {"You free it without asking", "It was a trap, the fish betrays you."},
              {"You ask questions before deciding", "The fish shows wisdom and gives you an ancient fragment."},
              {"You ignore it and move on", "You feel guilty, but avoid trouble."}
          },
          "Ancient Coral Fragment" , 2 },

         // Level 4 – Fields of Wild Currents
        { "A violent current pulls you, and you must choose which creature to ally with to help you swim safely.",
          {
              {"A giant squid", "It helps you, but demands a favor in return."},
              {"A group of sea turtles", "They transport you calmly and safely."},
              {"A very fast lone dolphin", "You arrive quickly but get separated from the group."}
          },
          "Current Amulet", 3 },


       // Level 5 – The Palace of Corruption
        { "You reach the heart of darkness: a gigantic creature made of oil and shadows is corrupting the water.\nHow do you decide to face it?",
          {
              {"You use a sacred pearl you found on the way", "The creature weakens and retreats."},
              {"You summon all the creatures you helped before", "They fight with you and manage to contain it."},
              {"You use your own life energy as a last resort", "The creature disappears, but you're left badly injured."}

          },
          "Heart of Nerysia", 1 }

}
    

};


//aventur two
Aventura infernum = {
    "Infernum (Fire World)",
    {
        {"Level 1 - Ashen Plains: The ground trembles beneath your feet. Fiery lizards have started attacking caravans of volcanic rock traders. What do you do to save the merchants?",
             {{"You try to talk to the lizards", "The lizards don’t understand and become even more agitated."},
              {"You throw frozen water at them", "The lizards become enraged and start attacking everyone."},
              {"You distract them with a bright torch", "The lizards are confused by the light and freeze, saving the merchants."}},
        "Lava Sword", 2},

        {"Level 2 - Canyon of Burning Thunder: You find a crack emitting poisonous steam that is affecting the lava birds. Some surround you in confusion. What do you do to help the birds?",
             {{"Block the crack with rocks", "The pressure causes an explosion and everyone dies." },
             {"Guide the birds out of the smoke", "You save the birds and they thank you with a bread to regain energy."},
             {"Confront them, thinking they're hostile", "The birds attack you."}},
        "Enchanted Fire Heart", 1},

        {"Level 3 - Sleeping Volcano: You climb a volcano to investigate its energy. You discover a crack leading to a secret cavern, but it is guarded by magma golems. How do you access the secret cavern?",
             {{"Mimic the golems’ movements", "They mistake you for one of them and let you pass."},
             {"Camouflage yourself with volcanic mud", "The mud burns you and you die."},
             {"Wait until they fall asleep to sneak past", "You fall asleep and the golems catch you."}},
        "Magma Scepter", 0}, 

        {"Level 4 - River of Eternal Lava: To reach the next area, you must cross a lava river over platforms that melt over time. How do you cross the river?",
             {{"Use a fireproof beetle shell", "You protect yourself from the lava and cross without issues."},
             {"Jump as quickly as posible", "You get burned because you don’t jump fast enough."},
             {"Use an ancient ice shard to freeze parts of the lava", "The ice melts too quickly and you fall into the river."}},
       "Volcanic Rock Shield", 0},

       {"Level 5 - Core of the Burning Colossus: Deep in the world, you face the Burning Colossus, a creature that seems made from the planet’s core. It is enraged. How do you defeat the colossus?",
             {{"Use a special mineral that absorbs heat", "The mineral is too weak and melts."},
              {"Help it remember who it once was with an ancient artifact", "The colossus is moved and falls asleep peacefully."},
              {"Try to fight the colossus", "The colossus is too strong and crushes you."}},
        "Colossus Amulet", 1},
     }                  
};

 
Aventura thornia = { // we declare the adventure to which we will add data
    "Thornia (The Forgotten World)", // name of the adventure as required by the structure
    {   
        // situation 1 (level 1) 
        { "You wake up in some ruins covered in mist, and a statue emits a sound.",
          // decision and consequence
          { {"Touch the statue", "You are paralyzed for a few seconds and lose time."},
            {"Touch a triangle-shaped symbol on the wall", "A portal of light appears before you."},
            {"Walk into the mist", "You hear whispers and move away."}
          },
          // reward obtained and option that grants it
          "Abyssal Shield", 1 },

        // situation 2 (level 2)
        { "You exit the cave through the portal and find a tower that endlessly whispers your thoughts.",
          { {"You remain silent.", "You can’t endure the voice of your thoughts and lose sanity."},
            {"You climb to the top of the tower.", "You find nothing and return."},
            {"You investigate beneath the tower, approaching the whispers.", "You find an underground entrance and a chest."}
          },
          "Worn Axe", 2 },

        // situation 3 (level 3)
        { "As you descend, you find a room with 3 hooded statues bearing different symbols.",
          { {"Touch the first statue with a square symbol.", "You trigger a trap and fail to escape in time."},
            {"Touch the second statue with a circular symbol.", "A mist appears and you fall unconscious."},
            {"Touch the third statue with a triangular symbol.", "The statue moves aside, revealing a path behind it, and you take its hood."}
          },
          "Old Hood", 2 },

        // situation 4 (level 4)
        { "You follow the path and enter a dark room full of weapons, rubble, and symbols on the walls.",
          { {"Investigate the rubble.", "As you approach the rubble, you find a book. The runes activate with the hood, revealing a door."},
            {"Return to the previous room.", "You accomplish nothing."},
            {"Investigate the weapons.", "You trip and get impaled by a sword in a humiliating way."}
          },
          "Unknown Book", 0 },

        // situation 5 (level 5)
        { "After crossing the door, you enter a chamber lit by floating crystals. In the center, the Guardian of Oblivion awakens from its slumber. Only one action can weaken it to give you a chance to defeat it.",
          { {"Attack directly with the axe.", "The guardian blocks your attack and throws you against the wall, leaving you injured."},
            {"Read aloud the inscription from the unknown book.", "The chamber trembles. The guardian appears weakened and staggers, but remains standing."},
            {"Cover yourself with the old hood.", "The hood burns on contact with the guardian's energy, leaving you unprotected."}
          },
          "Memory Crystal", 1 }
    }
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
}//mostrar progreso
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

//añadiendo minijuegos mamalones
//Minigame Nerysia for level 2
void minigameFishing() {
    int x = rand() % 3;
    int y = rand() % 3;

    int tryX, tryY;
    string input;

    cout << "\n--- Minigame: Fishing in Crystal Waters ---\n";
    cout << "Guess at what point (x, y) the fish is (values between 0 and 2):\n";

    while (true) {
        // Validate coordinate X
        while (true) {
            cout << "Enter X coordinate: ";
            cin >> input;

            bool isNumber = true;
            for (char c : input) {
                if (!isdigit(c)) {
                    isNumber = false;
                    break;
                }
            }

            if (isNumber) {
                tryX = stoi(input);
                if (tryX >= 0 && tryX <= 2) break;
            }

            cout << "Invalid input. Enter a number between 0 and 2.\n";
        }

        // Validate coordinate Y
        while (true) {
            cout << "Enter Y coordinate: ";
            cin >> input;

            bool isNumber = true;
            for (char c : input) {
                if (!isdigit(c)) {
                    isNumber = false;
                    break;
                }
            }

            if (isNumber) {
                tryY = stoi(input);
                if (tryY >= 0 && tryY <= 2) break;
            }

            cout << "Invalid input. Enter a number between 0 and 2.\n";
        }

        // check hits
        if (tryX == x && tryY == y) {
            cout << "You caught the golden fish at (" << x << ", " << y << ")!\n";
            break;
        } else {
            cout << "Nothing here... Try again!\n";
        }
    }

    cout << "Minigame finished.\n";
}



// Minigame Nerysia for level 4
void minigameLostObjects() {
    char objects[5] = {'F', 'R', 'F', 'L', 'T'}; // 'F' is repeated
    string input;
    bool correct = false;

    cout << "\n--- Minigame: Lost Objects ---\n";
    cout << "Look at the objects: ";
    for (int i = 0; i < 5; i++) cout << objects[i] << " ";
    cout << "\nOne of them is repeated. Which one? ";

    while (!correct) {
        cin >> input;

        if (input.length() != 1) {
            cout << "Only one letter is allowed. Try again: ";
            continue;
        }

        char answer = input[0];

        if ((answer >= 'A' && answer <= 'Z') || (answer >= 'a' && answer <= 'z')) {
            if (answer == 'F' || answer == 'f') {
                cout << "Correct! 'F' is repeated.\n";
                correct = true;
            } else {
                cout << "Wrong! Try again: ";
            }
        } else {
            cout << "Please enter a valid letter: ";
        }
    }

    cout << "Minigame finished.\n";
}

//minijuego 2 

//game 3  magma
void minigameMagma() {
    string options[3] = {"Rock", "Paper", "Magma"};
    int guardianMoves[3] = {2, 0, 1}; // Magma, Rock, Paper
    string input;
    int player = -1, guardian;
    int playerPoints = 0, guardianPoints = 0;
    int round = 0;

    cout << "You must defeat the stone guardian.\n";

    while (playerPoints < 2) {
        do {
            cout << "\n0 = Rock | 1 = Paper | 2 = Magma\nYour choice: ";
            cin >> input;

            bool isValid = true;

            if (input.length() != 1 || input[0] < '0' || input[0] > '9') {
                isValid = false;
            } else {
                player = input[0] - '0';
                if (player < 0 || player > 2) isValid = false;
            }

            if (!isValid) {
                cout << "Invalid input. Enter 0, 1, or 2.\n";
                continue;
            } else {
                break;
            }

        } while (true);

        guardian = guardianMoves[round % 3]; // cicla entre 0, 1, 2
        cout << "The guardian chose: " << options[guardian] << endl;

        if (player == guardian) {
            cout << "It's a tie.\n";
        }
        else if (
            (player == 0 && guardian == 2) || // Rock beats Magma
            (player == 2 && guardian == 1) || // Magma beats Paper
            (player == 1 && guardian == 0)    // Paper beats Rock
        ) {
            cout << "You win this round.\n";
            playerPoints++;
        } else {
            cout << "You lose this round.\n";
            guardianPoints++;
        }

        round++;
    }

    cout << "\nYou won.\n";
}



//minijuego 3


// Configuraciones de minijuegos para cada aventura
ConfigMinijuegos obtenerConfigNerysia() {
    return ConfigMinijuegos{
        {false, true, false, false, true}, // niveles con minijuego
        {1, 0, 0, 0, 3}                   // tipo de minijuego: 1 = Tesoro, 3 = Contar
    };
}

ConfigMinijuegos obtenerConfigInfernum() {
    return ConfigMinijuegos{
        {true, false, false, true, false},
        {2, 0, 0, 4, 0}  // 2 = Simon, 4 = otro
    };
}

ConfigMinijuegos obtenerConfigThornia() {
    return ConfigMinijuegos{
        {false, false, false, false, false},
        {0, 0, 0, 0, 0}
    };
}

//jugar nivel de aventura
bool jugarNivel(const Nivel& nivel, const ConfigMinijuegos& config, int indiceNivel) {
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
        // Primero jugar minijuego si existe
        if (config.activar[indiceNivel]) {
            switch (config.tipo[indiceNivel]) {
                case 1: minijuegoTesoro(); break;
                case 2: minijuegoSimon(); break;
                case 3: minijuegoContar(); break;
                case 4: minijuegoMemoria(); break;
                default: break;
            }
        }
        
        // Ahora mostrar y agregar premio
        cout << "¡Ganaste el premio: " << nivel.premio << "!\n";
        agregarPremio(nivel.premio);

        return true;  //  Pasó el nivel
    } else {
        return false; //  Repetir nivel
    }
}
//funcion de jugar aventura 
void jugarAventura(const Aventura& aventura, const ConfigMinijuegos& config) {
    cout << "\n--- Bienvenido a " << aventura.nombre << " ---\n";
    for (int i = 0; i < 5; i++) { //recorremos el arreglo de la funcion 
        cout << "\n--- Nivel " << i + 1 << " ---";
        bool pasoNivel = false;
        do {
            pasoNivel = jugarNivel(aventura.niveles[i], config, i);
        } while (!pasoNivel); //  Repite hasta que el jugador acierte
       // jugarNivel(aventura.niveles[i]);
      // jugarNivel(aventura.niveles[i], config, i); //  Pasas config y el índice actual

      
    }
    cout << "\n¡Has completado la aventura!\n";
    
}

//ConfigMinijuegos config;  // variable global en def.cpp

void intentarJugarAventura(const Aventura& aventura, int indiceAventura, const ConfigMinijuegos& config) {
    if (indiceAventura < 0 || indiceAventura >= 3) {
        cout << "Indice de aventura invalido.\n";
        return;
    }
    if (aventurasJugadas[indiceAventura]) {
        cout << "\nYa jugaste la aventura \"" << aventura.nombre << "\" anteriormente.\n";
    } else {
     
        jugarAventura(aventura, config);
        aventurasJugadas[indiceAventura] = true;
    }
}
void introduccionJuego() {
    cout << "Antes de comenzar, dime tu nombre: ";
    cin >> nombreJugador;
    cout << "\nMuy bien, " << nombreJugador << ". Preparate para tu destino...\n";
}