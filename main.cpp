#include <iostream>
#include "src/def.cpp"
using namespace std;

int main() {
    string input;
    int option;
    gameIntroduction();

    do {
        cout << "\n=== Select an adventure ===\n";
        cout << "1. Nerysia (Water World)\n";
        cout << "2. Infernum (Fire World)\n";
        cout << "3. Thornia (Forgotten World)\n";
        cout << "4. Show progress\n";
        cout << "5. Umbra (Shadow Realm) [Unlocks with all rewards]\n";
        cout << "0. Exit\n";
        cout << "Option: ";
        cin >> input;

        // Validate that it is a valid integer number

        bool isNumber = true;
        for (char c : input) {
            if (c < '0' || c > '9') {
                isNumber = false;
                break;
            }
        }

        if (!isNumber) {
            cout << "Invalid input. You must enter only numbers.\n";
            continue;
        }

        option = stoi(input);

        switch (option) {
            case 1:
                tryPlayAdventure(nerysia, 0, getConfigNerysia());
                break;
            case 2:
                tryPlayAdventure(infernum, 1, getConfigInfernum());
                break;
            case 3:
                tryPlayAdventure(thornia, 2, getConfigThornia());
                break;
            case 4:
                readProgress();
                break;
            case 5:
                tryPlayUmbra();
                break;
                
            case 0:
                cout << "See you soon, " << playerName << "!!!!!\n";
                break;
            default:
                cout << "Invalid option. Choose between 0 and 5.\n";
        }
    } while (option != 0);

    return 0;
}
