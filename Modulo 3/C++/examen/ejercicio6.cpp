while True:
    print("\n--- Menú Principal ---")
    print("1. Saludar")
    print("2. Despedirse")
    print("3. Salir")

    opcion = input("Por favor, elige una opción: ")

    if opcion == '1':
        print("¡Hola Mundito, ¿Como Estás?! Bienvenido/a.")
    elif opcion == '2':
        print("¡Adiós Amiguis! Que tengas un buen día Cosito lindo.")
    elif opcion == '3':
        print(" Estas saliendo del programa. ¡Hasta luego Amiwuis!")
        break
    else:
        print("Opción no válida. Por favor, intenta de nuevo Bro.")