#include <iostream> // Necesario para entrada/salida (cin, cout)

// Prototipo de la función
// Se declara la función antes de que sea definida o utilizada.
float calcularAreaRectangulo(float base, float altura);

int main() {
    float baseRectangulo;
    float alturaRectangulo;
    float areaCalculada;

    // Solicitar al usuario la base del rectángulo
    std::cout << "Ingresa la base del rectangulo: ";
    std::cin >> baseRectangulo; // Leer la base desde la entrada del usuario

    // Solicitar al usuario la altura del rectángulo
    std::cout << "Ingresa la altura del rectangulo: ";
    std::cin >> alturaRectangulo; // Leer la altura desde la entrada del usuario

    // Llamar a la función calcularAreaRectangulo
    // El valor que devuelve la función se guarda en la variable areaCalculada
    areaCalculada = calcularAreaRectangulo(baseRectangulo, alturaRectangulo);

    // Mostrar el resultado
    std::cout << "El area del rectangulo es: " << areaCalculada << std::endl;

    return 0; // Indica que el programa finalizó correctamente
}

// Definición de la función calcularAreaRectangulo
// Implementa la lógica para calcular el área
float calcularAreaRectangulo(float base, float altura) {
    // La función multiplica la base por la altura y devuelve el resultado.
    return base * altura;
}