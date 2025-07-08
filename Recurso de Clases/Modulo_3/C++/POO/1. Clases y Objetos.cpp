#include <string>
#include <iostream>

// El corazón de la POO son las clases y los objetos.
//
// Clase: Es una plantilla o un plano para crear objetos. Define un nuevo tipo de dato con sus atributos y comportamientos.
// Por ejemplo, si quisiéramos representar un Carro, la clase definiría que todo carro tiene una marca, un modelo, un color
// y que puede acelerar, frenar y encenderse.
//
// Objeto: Es una instancia de una clase. Es la entidad concreta que se crea a partir de la plantilla.
// Siguiendo el ejemplo, un Carro específico como "un Toyota Corolla rojo" sería un objeto.
//
// Estructura de una Clase en C++

class Carro {
public:
    // Atributos (Miembros de datos)
    std::string marca;
    std::string modelo;
    int anio;
    int velocidad;

    // Métodos (Funciones miembro)
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