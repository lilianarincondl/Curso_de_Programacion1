#include <iostream>

#define LIMITE 10 

int main() {
    int numero;

    std::cout << "Ingresa un númerito para ver la tablita de multiplicar: ";
    std::cin >> numero;

    std::cout << "La tablita de multiplicar del " << numero << " hasta " << LIMITE << ":" << std::endl;
    for (int i = 1; i <= LIMITE; ++i) {
        std::cout << numero << " x " << i << " = " << (numero * i) << std::endl;
    }

    return 0;
}