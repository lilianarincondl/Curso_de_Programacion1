// La herencia es un mecanismo que permite a una clase (llamada clase derivada o hija) adquirir los atributos y métodos de otra clase (llamada clase base o padre). 
// Esto promueve la reutilización de código y la creación de jerarquías lógicas.
//
// Ejemplo de Herencia
// Imagina que tenemos una clase Vehiculo. Podemos crear clases más específicas como Carro y Motocicleta que hereden de Vehiculo.

#include <iostream>
#include <string>

// Clase Base
class Vehiculo {
public:
    std::string marca;

    void encender() {
        std::cout << "El vehículo ha encendido." << std::endl;
    }
};

// Clase Derivada
class Carro : public Vehiculo {
public:
    int numeroPuertas;

    void abrirMaletero() {
        std::cout << "El maletero se ha abierto." << std::endl;
    }
};

int main() {
    Carro miCarro;
    miCarro.marca = "Ford"; // Atributo heredado de Vehiculo
    miCarro.numeroPuertas = 4;

    miCarro.encender();     // Método heredado de Vehiculo
    miCarro.abrirMaletero(); // Método propio de Carro
    
    std::cout << "La marca del carro es: " << miCarro.marca << std::endl;

    return 0;
}
// Un Carro "es un" Vehiculo, por lo tanto, tiene todo lo que un Vehiculo tiene, y además sus propias