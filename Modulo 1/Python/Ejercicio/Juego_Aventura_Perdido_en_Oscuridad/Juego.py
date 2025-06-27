print("Nombre del juego: Perdido en la oscuridad\n")
print("Eres un aventurero y te acabas de separar de tus compañeros al caer en un foso.")
print("Tienes la suerte de seguir con vida y al intentar levantarte ves una antorcha que ilumina lo que parece una salida.")
print("¿IR hacia la luz o INVESTIGAR alrededor?\n")

opcion1 = input("> ").strip().lower()

if opcion1 == "investigar":
    print("\nAl intentar guiarte solo por el tacto y la efímera luz de la antorcha,")
    print("te das cuenta que donde caíste es una pila de cadáveres.")
    print("Decides ir hacia la luz.\n")
    opcion1 = "ir"

if opcion1 == "ir":
    print("Decides acercarte a la única fuente de luz visible.")
    print("Desde allí solo ves oscuridad adelante del pasillo que ilumina la antorcha.")
    print("¿ir al PASILLO o AGARRAR la antorcha?\n")
    opcion2 = input("> ").strip().lower()

    if opcion2 == "pasillo":
        print("\nA pesar de tus esfuerzos, no puedes distinguir el largo del pasillo.")
        print("Inevitablemente caes hacia tu muerte en un foso con picos.")
        print("Fin del camino. La aventura termina aquí.")

    elif opcion2 == "agarrar":
        print("\nAgarras la antorcha y avanzas por el pasillo.")
        print("Te detienes al encontrar un foso con picos en el fondo.")
        print("Decides saltar el foso.\n")
        print("Retrocedes un poco y saltas, aunque gracias al peso de tu armadura no llegas muy lejos.")
        print("Logras subir al borde del otro lado con esfuerzo, pero pierdes la antorcha.")
        print("Después de perder tu única fuente de luz, el pasillo se acaba en una habitación.")
        print("¿ir por un LADO o seguir RECTO?\n")
        opcion4 = input("> ").strip().lower()

        if opcion4 == "recto":
            print("\nVas con sumo cuidado intentando llegar al otro lado.")
            print("Para tu sorpresa, ves una puerta gracias a una luz que acaba de aparecer.")
            print("¿ESCONDERTE o SEGUIR?\n")
            opcion5 = input("> ").strip().lower()

            if opcion5 == "seguir":
                print("\nConfías en que nada malo ocurra y continúas un poco más rápido.")
                print("La luz se acerca y puedes escuchar pasos y una voz diciendo 'Alto, creo que algo se acerca'.")
                print("El eco te ayuda a distinguir la voz de uno de tus compañeros.")
                print("Gritas que eres tú y te reúnes con ellos.")
                print("Dices para ti mismo que ser aventurero no es lo mejor para vivir.")
                print("¡FIN!")

            elif opcion5 == "esconderte":
                print("\nIntentas ir con mucho cuidado para no ser escuchado.")
                print("Al chocar con una esquina notas un objeto: un arco con una flecha.")
                print("¿AGARRAR arco o NO hacer nada?\n")
                opcion6 = input("> ").strip().lower()

                if opcion6 == "agarrar":
                    print("\nAgarras el arco y esperas.")
                    print("La luz se acerca y ves quién la porta.")
                    print("¿DISPARAR o ESPERAR?\n")
                    opcion7 = input("> ").strip().lower()

                    if opcion7 == "disparar":
                        print("\nDisparas cegado por los nervios.")
                        print("Heriste a un compañero que te enseñó a usar el arco.")
                        print("Tus compañeros te recriminan. No tienes lo mínimo para seguir siendo aventurero.")
                        print("¡FIN!")

                    elif opcion7 == "esperar":
                        print("\nEsperas pacientemente.")
                        print("Tus compañeros te felicitan por mantener la calma.")
                        print("¡Buen final!")

                    else:
                        print("Opción inválida.")

                elif opcion6 == "no":
                    print("\nEsperas sin hacer nada.")
                    print("Tus compañeros te encuentran sano y salvo.")
                    print("Uno te dice que ser aventurero no es para los asustados.")
                    print("¡Final intermedio!")

                else:
                    print("Opción inválida.")

            else:
                print("Opción inválida.")

        elif opcion4 == "lado":
            print("\nMantienes una mano en la pared para no chocarte.")
            print("Llegas a otra pared y pisas algo: un arco con una flecha.")
            print("Ves una puerta con luz al otro lado de la habitación.")
            print("¿AGARRAR arco, NO hacer nada o EXPLORAR la habitación?\n")
            opcion5 = input("> ").strip().lower()

            if opcion5 == "agarrar":
                print("\nAgarras el arco y esperas.")
                print("¿DISPARAR o ESPERAR?\n")
                opcion6 = input("> ").strip().lower()

                if opcion6 == "disparar":
                    print("\nDisparas a tu compañero cegado por los nervios.")
                    print("¡Has fallado como aventurero! ¡FIN!")

                elif opcion6 == "esperar":
                    print("\nTus compañeros te reconocen y te felicitan.")
                    print("¡Buen trabajo!")

                else:
                    print("Opción inválida.")

            elif opcion5 == "no":
                print("\nEsperas que nada malo pase y sigues observando.")
                print("Tus compañeros te encuentran y te dicen que quizás ser aventurero no es para ti.")
                print("¡Final intermedio!")

            elif opcion5 == "explorar":
                print("\nSin luz ni defensa activas una trampa de flechas ocultas.")
                print("Una flecha se clava en tu cuello. ¡Has muerto!")

            else:
                print("Opción inválida.")

        else:
            print("Opción inválida.")

    else:
        print("Opción inválida.")
        
else:
    print("Opción inválida.")