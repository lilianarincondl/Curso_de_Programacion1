while True:
    print("\n--- Menú Principal ---")
    print("1. Saludar")
    print("2. Despedirse")
    print("3. Salir")

    opcion = input("Por favor, elige una opción: ")

    if opcion == '1':
        print("¡Hola! Bienvenido/a.")
    elif opcion == '2':
        print("¡Adiós! Que tengas un buen día.")
    elif opcion == '3':
        print("Saliendo del programa. ¡Hasta luego!")
        break
    else:
        print("Opción no válida. Por favor, intenta de nuevo.")