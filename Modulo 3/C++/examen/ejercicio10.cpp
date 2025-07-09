#include <iostream> // Necesario para std::cout, std::cin, std::endl
#include <vector>   // Necesario para usar std::vector
#include <string>   // Necesario para usar std::string

int main() {
    // Declarar un vector de strings para almacenar las comidas
    std::vector<std::string> comidasFavoritas;

    std::cout << "¡Hola! Por favor, ingresa 3 de tus comidas favoritas." << std::endl;

    // Bucle para pedir al usuario que ingrese 3 comidas
    for (int i = 0; i < 3; ++i) {
        std::string comida; // Variable temporal para guardar cada comida
        std::cout << "Comida #" << i + 1 << ": ";
        // Usamos std::getline para leer la línea completa, incluyendo espacios
        std::getline(std::cin >> std::ws, comida); // std::ws descarta cualquier espacio en blanco pendiente
        comidasFavoritas.push_back(comida); // Añadir la comida al vector
    }

    std::cout << "\n--- Tus comidas favoritas son: ---" << std::endl;

    // Bucle para recorrer el vector e imprimir cada comida
    // El bucle for-each es ideal para esto
    for (const std::string& comida : comidasFavoritas) {
        std::cout << "- " << comida << std::endl;
    }

    return 0; // Indica que el programa finalizó correctamente
}