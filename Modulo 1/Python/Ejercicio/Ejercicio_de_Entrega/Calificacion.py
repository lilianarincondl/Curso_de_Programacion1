calificacion= int(input("Holis, puedes darme tu calificacion: "))

if calificacion < 0 or calificacion > 100:
    print("El valor numerico no está permitido. Ingresa un valor del 0 al 100.")
else:
    print(f"Puntuación: {calificacion}")
    if calificacion >= 90:
        print("Obtuviste una A")
    elif calificacion >= 80:
        print("Obtuviste una B")
    elif calificacion >= 70:
        print("Obtuviste una C")
    elif calificacion >= 60:
        print("Obtuviste una D")
    else:
        print("Obtuviste una F")