monto_original = float(input("Ingresa el monto original de la compra: "))
descuento = float(input("Ingresa el porcentaje de descuento: "))
precio_final = monto_original - (monto_original * (descuento / 100))
print(f"El precio final después del descuento es: {precio_final:.2f}")
