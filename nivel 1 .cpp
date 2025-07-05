#include <iostream>
#include <vector>

// Definición de la clase Pulo
class Pulo {
public:
    std::vector<int> posiciones; // Posiciones de los pulpos en el arrecife
    std::vector<int> tinta; // Posiciones de la tinta lanzada por los pulpos

    void lanzarTinta(int posicion) {
        tinta.push_back(posicion);
    }

    void defender() {
        // Lanzar tinta en todas las posiciones de los pulpos
        for (int i = 0; i < posiciones.size(); i++) {
            lanzarTinta(posiciones[i]);
        }
    }
};

int main() {
    // Crear un objeto Pulo
    Pulo pulo;

    // Simular la destrucción del hogar de los peces globo
    std::cout << "El hogar de los peces globo ha sido destruido." << std::endl;

    // Simular el ataque de los peces globo a la aldea de los pulpos
    std::cout << "Los peces globo atacan la aldea de los pulpos." << std::endl;

    // Lanzar tinta para defenderse
    pulo.defender();

    // Mostrar las posiciones de la tinta lanzada
    std::cout << "Posiciones de la tinta lanzada:" << std::endl;
    for (int i = 0; i < pulo.tinta.size(); i++) {
        std::cout << pulo.tinta[i] << std::endl;
    }

    return 0;
}
