#include <iostream> 
float calcularAreaRectangulo(float base, float altura);

int main() {
    float baseRectangulo;
    float alturaRectangulo;
    float areaCalculada;

    std::cout << "Ingresa la base del rectangulo: ";
    std::cin >> baseRectangulo; 

    std::cout << "Ingresa la altura del rectangulo: ";
    std::cin >> alturaRectangulo; 

   
    areaCalculada = calcularAreaRectangulo(baseRectangulo, alturaRectangulo);

    
    std::cout << "El area del rectangulo es: " << areaCalculada << std::endl;

    return 0; 
}


float calcularAreaRectangulo(float base, float altura) {
    return base * altura;
}