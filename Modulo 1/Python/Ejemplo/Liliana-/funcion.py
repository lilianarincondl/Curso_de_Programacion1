def saludar(nombre):
    """Función que saluda a una persona."""
    print(f"¡Hola, {nombre}!")

saludar("Lily")

def sumar(a, b):
    return a + b

resultado = sumar(9,2)  
print(f"La suma de 9 y 2 es: {resultado}")  

def multiplicar(a, b=2):
    return a * b    

resultado_multiplicacion = multiplicar(8)  
print(f"8 multiplicado por 2 es: {resultado_multiplicacion}")  

resultado_multiplicacion_con_dos = multiplicar(4, 8)  
print(f"4 multiplicado por 8 es: {resultado_multiplicacion_con_dos}") 

def calcular_area_rectangulo(base, altura):
    return base * altura
area = calcular_area_rectangulo(7, 4) 
print(f"El área del rectángulo es: {area}")  

def calcular_area_circulo(radio):
    import math  
    return math.pi * (radio ** 2)  

import math
def calc(radio):
    return math.pi * (radio ** 2)
radio = 9
area = calc(radio)
print("El area del circulo es: ", round(area, 2))