#include <iostream>
#include <cmath>

const double PI_VALUE = 3.14159;

void calcularPerimetro(double radio) {
    double perimetro = 2 * PI_VALUE * radio;
    std::cout << "El perimetro del circulo con radio " << radio << " es: " << perimetro << std::endl;
}

int main() {
    double radioCirculo;

    std::cout << "Ingresa el radio del circulo: ";
    std::cin >> radioCirculo;

    calcularPerimetro(radioCirculo);

    return 0;
}
