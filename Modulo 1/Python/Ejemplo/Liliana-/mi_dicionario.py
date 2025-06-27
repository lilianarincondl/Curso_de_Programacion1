mi_diccionario = {
    "Arianyelina Rincón": 14,
    "Brian Mendez": 10,
    "Carlos Villero": 18,
    "Damian Garcia": 13,
    "Deicel Fernandez": 13,
    "Elias Rivas": 18,
    "Fabian Cardena": 17,
    "Franklin Vecino": 17,
    "Helyanni Rodriguez": 16,
    "Liliana Rincón": 14,
    "Maria Jose Macias": 16,
    "Over Machado": 16,
    "Paul Moran": 14,
    "Ronald Trujillo": 12,
    "Yuliexy Dimas": 10,
}
print("\nLista de notas de los estudiantes del curso de programación:") 

for clave in mi_diccionario:
    print(f"\nNombre: {clave}, Nota: {mi_diccionario[clave]}") 

print("\nLista de notas de los estudiantes del curso de programación cambiada por la edad de cada uno:")
mi_diccionario["Arianyelina Rincón"] = 21
mi_diccionario["Brian Mendez"] = 26
mi_diccionario["Carlos Villero"] = 20
mi_diccionario["Damian Garcia"] = 20
mi_diccionario["Deicel Fernandez"] = 17
mi_diccionario["Elias Rivas"]= 20
mi_diccionario["Fabian Cardena"] = 21
mi_diccionario["Franklin Vecino"]= 20
mi_diccionario["Helyanni Rodriguez"] = 21
mi_diccionario["Liliana Rincón"] = 20
mi_diccionario["Maria Jose Macias"] = 24
mi_diccionario["Over Machado"] = 20
mi_diccionario["Paul Moran"] = 20
mi_diccionario["Ronald Trujillo"] = 21
mi_diccionario["Yuliexy Dimas"] = 21

for clave in mi_diccionario:
    print(f"\nNombre : {clave}, Edad: {mi_diccionario[clave]}") 

    #conjuntos 

conjunto = {1, 2, 3, 4, 5}
print("¿El número 5 está en el conjunto?", 5 in conjunto)

conjunto.add(6)
print("se agrego  el número 6:", conjunto) 

conjunto.add(5)
print("Conjunto después de intentar añadir el número 5 de nuevo:", conjunto)

conjunto.remove(2)  
print("Conjunto después de eliminar el número 2:", conjunto)

conjunto.discard(3) 
print("Conjunto después de eliminar el número 3 de forma segura:", conjunto)

print("Longitud del conjunto:", len(conjunto))
print("¿El número 4 está en el conjunto?", 4 in conjunto)

pdvjdnvdh