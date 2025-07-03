mi_cesta_de_compras = []

print("Bienvenido a Mi Cesta de Compras!")

while True:
    print("\n--- Menú Principal ---")
    print("1. Añadir un Nuevo Artículo")
    print("2. Ver Contenido de la Cesta")
    print("3. Eliminar un Artículo")
    print("4. Calcular el Costo Total")
    print("5. Salir de la Aplicación")
    print("----------------------")

    eleccion_usuario = input("Por favor, elige una opción: ").strip()

    if eleccion_usuario == '1':
        nombre_articulo = input("Ingresa el nombre del artículo: ").strip()
        if not nombre_articulo:
            print("El nombre del artículo no puede estar vacío. Por favor, inténtalo de nuevo.")
            continue

        while True:
            try:
                precio_articulo = float(input(f"Ingresa el precio de '{nombre_articulo}': $"))
                if precio_articulo < 0:
                    print("El precio no puede ser negativo. Por favor, ingresa un precio válido.")
                else:
                    break
            except ValueError:
                print("Precio inválido. Por favor, ingresa un número.")

        mi_cesta_de_compras.append({"nombre": nombre_articulo, "precio": precio_articulo})
        print(f"'{nombre_articulo}' ha sido añadido a tu cesta.")

    elif eleccion_usuario == '2':
        if not mi_cesta_de_compras:
            print("Tu cesta de compras está actualmente vacía.")
        else:
            print("\n--- Tu Cesta Actual ---")
            for indice, articulo in enumerate(mi_cesta_de_compras):
                print(f"{indice + 1}. {articulo['nombre']} - ${articulo['precio']:.2f}")
            print("------------------------")

    elif eleccion_usuario == '3':
        if not mi_cesta_de_compras:
            print("Nada que eliminar. Tu cesta está vacía.")
            continue

        print("\n--- Tu Cesta Actual ---")
        for indice, articulo in enumerate(mi_cesta_de_compras):
            print(f"{indice + 1}. {articulo['nombre']} - ${articulo['precio']:.2f}")
        print("------------------------")

        while True:
            try:
                numero_articulo_a_eliminar = int(input("Ingresa el número del artículo a eliminar: "))
                if 1 <= numero_articulo_a_eliminar <= len(mi_cesta_de_compras):
                    articulo_eliminado = mi_cesta_de_compras.pop(numero_articulo_a_eliminar - 1)
                    print(f"'{articulo_eliminado['nombre']}' ha sido eliminado.")
                    break
                else:
                    print("Número de artículo inválido. Por favor, elige un número de la lista.")
            except ValueError:
                print("Entrada inválida. Por favor, ingresa un número.")

    elif eleccion_usuario == '4':
        if not mi_cesta_de_compras:
            print("Tu cesta está vacía, por lo que el total es $0.00.")
            continue

        costo_total = sum(articulo['precio'] for articulo in mi_cesta_de_compras)
        print(f"El total de tu cesta es: ${costo_total:.2f}")

    elif eleccion_usuario == '5':
        print("Gracias por usar Mi Cesta de Compras. ¡Hasta la próxima!")
        break

    else:
        print("Opción inválida. Por favor, selecciona un número del menú (1-5).")
