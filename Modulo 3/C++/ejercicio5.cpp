#include <iostream>

int main() {
   
    int numeroSecreto = 42; 

    int adivinanza;
    bool adivinado = false;

    std::cout << "¡Bienvenido a un jueguito de adivinanza!" << std::endl;
    std::cout << "Adivina el numerito que estoy pensando en un número entre 1 y 100." << std::endl;


    while (!adivinado) {
        std::cout << "Adivina el número, vamos tu puedes: ";
        std::cin >> adivinanza;

        if (adivinanza == numeroSecreto) {
            std::cout << "¡Felicidades! ¡Has adivinado el númerito secreto (" << numeroSecreto << ")!" << std::endl;
            adivinado = true;
        } else if (adivinanza < numeroSecreto) {
            std::cout << "Demasiado bajito. ¡Intenta con un númerito más alto!" << std::endl;
        } else {
            std::cout << "Demasiado altito bro. ¡Intenta con un númerito más bajo!" << std::endl;
        }
    }

    return 0;
}
