num = int(input("Ingresa un año: "))
if num % 4 != 0:
        print("No es bisiesto")
elif num % 4 == 0 and num % 100 != 0:
        print("Es bisiesto")
elif num % 4 == 0 and num % 100 == 0 and num % 400 != 0:
        print("No es bisiesto")
elif num % 4 == 0 and num % 100 == 0 and num % 400 == 0:
        print("Es bisiesto")
        
        
    