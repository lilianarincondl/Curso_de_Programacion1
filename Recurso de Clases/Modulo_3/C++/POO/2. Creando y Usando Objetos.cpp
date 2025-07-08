// Una vez definida la clase, podemos crear objetos (instanciar) y usar sus atributos y métodos con el operador punto (.);

#include <iostream>
#include <string>

// Definición de la clase Carro
class Carro {
public:
    std::string marca;
    std::string modelo;
    int anio;
    int velocidad;

    void acelerar(int aumento) {
        velocidad += aumento;
    }

    void frenar(int decremento) {
        velocidad -= decremento;
    }

    void mostrarInfo() {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << anio << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Carro
    Carro miCorolla;

    // Asignar valores a sus atributos
    miCorolla.marca = "Toyota";
    miCorolla.modelo = "Corolla";
    miCorolla.anio = 2023;
    miCorolla.velocidad = 0;

    // Usar sus métodos
    miCorolla.mostrarInfo(); // Salida: Marca: Toyota, Modelo: Corolla, Año: 2023
    miCorolla.acelerar(50);
    std::cout << "Velocidad actual: " << miCorolla.velocidad << " km/h" << std::endl; // Salida: Velocidad actual: 50 km/h

    return 0;
}