#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> comidasFavoritas;

    std::cout << "¡Hola! Por favor, ingresa 3 de tus comidas favoritas." << std::endl;

    for (int i = 0; i < 3; ++i) {
        std::string comida;
        std::cout << "Comida #" << i + 1 << ": ";
        std::getline(std::cin >> std::ws, comida);
        comidasFavoritas.push_back(comida);
    }

    std::cout << "\n--- Tus comidas favoritas son: ---" << std::endl;

    for (const std::string& comida : comidasFavoritas) {
        std::cout << "- " << comida << std::endl;
    }

    return 0;
}
