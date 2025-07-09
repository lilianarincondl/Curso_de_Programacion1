#include <iostream> 

void modificarPorValor(int num) {
    num = num + 10; 
    std::cout << "Dentro de modificarPorValor: el numero es " << num << std::endl;
}

void modificarPorReferencia(int &num) {
    num = num + 10; 
    std::cout << "Dentro de modificarPorReferencia: el numero es " << num << std::endl;
}

int main() {
    int numero = 20; 

    std::cout << "Valor inicial de numero: " << numero << std::endl;

    std::cout << "\nLlamando a modificarPorValor..." << std::endl;
    modificarPorValor(numero);
    std::cout << "Despues de modificarPorValor: el numero es " << numero << std::endl;

    std::cout << "\nLlamando a modificarPorReferencia..." << std::endl;
    modificarPorReferencia(numero);
    std::cout << "Despues de modificarPorReferencia: el numero es " << numero << std::endl;

    return 0; 
}
