#include <iostream>

int main() {
    int edad;
    std::cout << "Por fis, ingresa tu edad amiguito: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Ya estas viejito mi pana." << std::endl;
    } else {
        std::cout << "Tas muy peteño" << std::endl;
    }

    return 0;
}