#include <iostream>
#include <cmath> 

int main() {
    double num1, num2;

    
    std::cout << "Holis, Ingresa el primer número: ";
    std::cin >> num1;
    std::cout << "Holis otra vez, Ingresa el segundo número: ";
    std::cin >> num2;

   
    std::cout << "Suma: " << num1 + num2 << std::endl;
    std::cout << "Resta: " << num1 - num2 << std::endl;
    std::cout << "Multiplicación: " << num1 * num2 << std::endl;
   
    if (num2 != 0) {
        std::cout << "División: " << num1 / num2 << std::endl;
    } else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }

  
    std::cout << "Potencia (" << num1 << "^" << num2 << "): " << pow(num1, num2) << std::endl;

    if (num1 >= 0) {
        std::cout << "Raíz cuadrada de " << num1 << ": " << sqrt(num1) << std::endl;
    } else {
        std::cout << "No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
    }

    return 0;
}