#include <iostream> // Para usar std::cout y std::endl

// 1. Función que recibe un entero por valor
// Una copia del valor de la variable original es pasada a esta función.
void modificarPorValor(int num) {
    num = num + 10; // Solo se modifica la copia local de 'num'
    std::cout << "Dentro de modificarPorValor: el numero es " << num << std::endl;
}

// 2. Función que recibe un entero por referencia
// La función trabaja directamente con la variable original usando su dirección de memoria.
void modificarPorReferencia(int &num) { // El '&' indica que 'num' es una referencia
    num = num + 10; // Se modifica la variable original
    std::cout << "Dentro de modificarPorReferencia: el numero es " << num << std::endl;
}

int main() {
    int numero = 20; // Declarar e inicializar 'numero' en 20

    std::cout << "Valor inicial de numero: " << numero << std::endl;

    // Llamada a la función modificarPorValor
    // Se pasa una COPIA del valor de 'numero'
    std::cout << "\nLlamando a modificarPorValor..." << std::endl;
    modificarPorValor(numero);
    std::cout << "Despues de modificarPorValor: el numero es " << numero << std::endl;
    // Observa que 'numero' sigue siendo 20, porque la función trabajó con una copia.

    // Llamada a la función modificarPorReferencia
    // Se pasa una REFERENCIA a la variable original 'numero'
    std::cout << "\nLlamando a modificarPorReferencia..." << std::endl;
    modificarPorReferencia(numero);
    std::cout << "Despues de modificarPorReferencia: el numero es " << numero << std::endl;
    // Observa que 'numero' ahora es 30, porque la función modificó la variable original.

    return 0; // El programa finalizó correctamente
}