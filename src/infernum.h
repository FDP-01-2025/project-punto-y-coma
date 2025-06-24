// infernum.h
#include <iostream>
#include <recompensas.h>
using namespace std;

void jugarInfernum() {
    int decision;

    // Nivel 1
    cout << "\n Nivel 1: Llanuras de Ceniza \n";
    cout << "El suelo tiembla bajo tus pies. Unos lagartos ígneos atacan caravanas de comerciantes de roca volcánica.\n";
    cout << "¿Qué decisión tomas?\n";
    cout << "1. Tratar de hablar con los lagartos\n";
    cout << "2. Arrojarles agua congelada de una esfera mágica\n";
    cout << "3. Usar una antorcha brillante para distraerlos\n";
    cin >> decision;

    if (decision == 3) {
        cout << "La antorcha los confunde y logras que los comerciantes escapen sanos y salvos.\n";
        char premio[] = "Antorcha de Engaño Ígneo";
        agregarPremio(premio);
    } else if (decision == 1) {
        cout << "Los lagartos no comprenden y te atacan, luego a los comerciantes.\n";
    } else {
        cout << "El agua los enfurece más y comienzan a dezpedazar a todos.\n";
    }

}