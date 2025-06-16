// nerysia.h
#include <iostream>
#include <recompensas.h>
using namespace std;

void jugarNerysia() {
    int decision;

    // Nivel 1
    cout << "\n Nivel 1: Arrecife de Coral \n";
    cout << "Los peces globo han encontrado su hogar destruido y atacan la aldea de los pulpos.\n";
    cout << "¿Que arma les recomiendas usar?\n";
    cout << "1. Sus espinas\n";
    cout << "2. Una espada\n";
    cout << "3. La tinta de los pulpos\n";
    cin >> decision;
    if (decision == 3) {
        cout << "La tinta ciega a los peces globo y se dispersan.\n";
        char premio[] = "Tinta Estrategica";
        agregarPremio(premio);
    } else {
        cout << "La batalla fue dificil, pero logras calmar la situacion.\n";
    }

    // Nivel 2
    cout << "\n Nivel 2: Bosque de Algas Luminosas \n";
    cout << "Una criatura marina gigante bloquea el paso.\n";
    cout << "1. Cantar una melodia relajante\n";
    cout << "2. Usar luz brillante\n";
    cout << "3. Golpear con fuerza\n";
    cin >> decision;
    if (decision == 1) {
        cout << "La melodia calma a la criatura y te deja pasar.\n";
        char premio[] = "Concha Melódica";
        agregarPremio(premio);
    } else {
        cout << "Logras pasar, pero la criatura queda inquieta.\n";
    }

    // Nivel 3
    cout << "\n Nivel 3: Cañon Abisal \n";
    cout << "La presion es intensa y la visibilidad es baja.\n";
    cout << "1. Seguir una corriente térmica\n";
    cout << "2. Usar un faro bioluminiscente\n";
    cout << "3. Avanzar a ciegas\n";
    cin >> decision;
    if (decision == 2) {
        cout << "La luz te guia con seguridad.\n";
        char premio[] = "Faro Bioluminiscente";
        agregarPremio(premio);
    } else {
        cout << "Tu camino es peligroso, pero logras avanzar.\n";
    }

    // Nivel 4
    cout << "\n Nivel 4: Cementerio de Barcos Hundidos \n";
    cout << "Fantasmas marinos te rodean.\n";
    cout << "1. Mostrar respeto y pedir permiso\n";
    cout << "2. Nadar rapidamente\n";
    cout << "3. Atacar con energia marina\n";
    cin >> decision;
    if (decision == 1) {
        cout << "Los espiritus te bendicen y te dejan pasar.\n";
        char premio[] = "Bendición del Mar";
        agregarPremio(premio);
    } else {
        cout << "Pasas, pero con una energia oscura a tu alrededor.\n";
    }

    // Nivel 5
    cout << "\n Nivel 5: Trinchera de Nerysia \n";
    cout << "Debes enfrentar la presencia oscura que contamina el oceano.\n";
    cout << "1. Fusionarte con la energia del oceano\n";
    cout << "2. Sellar el nucleo oscuro con un ritual\n";
    cout << "3. Destruir todo con poder\n";
    cin >> decision;
    if (decision == 1) {
        cout << "Te conviertes en guardian eterno de Nerysia. Final protector.\n";
    } else if (decision == 2) {
        cout << "El nucleo es sellado y el equilibrio regresa. Final armonioso.\n";
    } else {
        cout << "La amenaza desaparece, pero a un gran costo. Final tragico.\n";
    }
}