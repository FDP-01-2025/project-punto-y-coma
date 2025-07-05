#include <iostream>
#include <string>

int main() {
    std::cout << "¿A quién eliges para ayudarte a nadar a salvo?" << std::endl;
    std::cout << "1. Un calamar gigante" << std::endl;
    std::cout << "2. Un grupo de tortugas marinas" << std::endl;
    std::cout << "3. Un delfín solitario muy veloz" << std::endl;

    int opcion;
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Has elegido un calamar gigante. ¡Buena elección!" << std::endl;
            break;
        case 2:
            std::cout << "Has elegido un grupo de tortugas marinas. ¡Buena elección!" << std::endl;
            break;
        case 3:
            std::cout << "Has elegido un delfín solitario muy veloz. ¡Buena elección!" << std::endl;
            break;
        default:
            std::cout << "Opción inválida. ¡Vuelve a intentarlo!" << std::endl;
            return 1;
    }

    return 0;
}
```

**Nivel 5 - El Palacio de la Corrupción**
```cpp
#include <iostream>
#include <string>

int main() {
    std::cout << "¿Cómo decides enfrentar a la criatura gigantesca hecha de petróleo y sombras?" << std::endl;
    std::cout << "1. Usas una perla sagrada que encontraste en el camino" << std::endl;
    std::cout << "2. Invocas a todas las criaturas que ayudaste antes" << std::endl;
    std::cout << "3. Usas tu propia energía vital como último recurso" << std::endl;

    int opcion;
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Has decidido usar la perla sagrada. ¡Buena elección!" << std::endl;
            break;
        case 2:
            std::cout << "Has decidido invocar a las criaturas que ayudaste antes. ¡Buena elección!" << std::endl;
            break;
        case 3:
            std::cout << "Has decidido usar tu propia energía vital como último recurso. ¡Buena elección!" << std::endl;
            break;
        default:
            std::cout << "Opción inválida. ¡Vuelve a intentarlo!" << std::endl;
            return 1;
    }

    return 0;
}