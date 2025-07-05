#include <iostream>
#include <string>

int main() {
    // Preguntas al pez anciano
    std::cout << "Has llegado a una zona tan profunda que la luz desaparece. Encuentras un pez anciano encerrado en una jaula de coral negro que suplica por ayuda. ¿Qué haces?" << std::endl;
    std::cout << "1. Lo liberas sin preguntar" << std::endl;
    std::cout << "2. Le haces preguntas antes de decidir" << std::endl;
    std::cout << "3. Lo ignoras y sigues tu camino" << std::endl;

    int opcion;
    std::cout << "Elige una opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Lo liberas sin preguntar. El pez anciano te agradece y te dice que su nombre es Zorvath y que ha estado encerrado en esa jaula durante siglos. Te pide que lo lleves a la superficie para que pueda ver el mundo de nuevo." << std::endl;
            break;
        case 2:
            std::cout << "Le haces preguntas antes de decidir. Zorvath te dice que ha estado encerrado en la jaula durante siglos y que ha visto muchas cosas en su vida. Te pide que lo liberes para que pueda ver el mundo de nuevo y compartir sus conocimientos contigo." << std::endl;
            break;
        case 3:
            std::cout << "Lo ignoras y sigues tu camino. Zorvath te suplica que lo liberes, pero tú lo ignoras y sigues adelante. Zorvath te maldice y te dice que nunca volverás a ver la luz del día." << std::endl;
            break;
        default:
            std::cout << "Opción inválida. No hagas nada." << std::endl;
            break;
    }

    return 0;
}