<?php
echo "## Metodos de pah\n";

$metodoDePago = "tarjeta";

switch ($metodoDePago) {
    case "Efectivo":
        echo "Pago en efectivo seleccionado. Prepara el monto exacto.\n";
        break; 

    case "Tarjeta":
        echo "Pago con tarjeta de débito/crédito seleccionado. Inserta o desliza la tarjeta.\n";
        break;

    case "Transferencia":
        echo "Pago por transferencia seleccionado. Muestra el comprobante.\n";
        break;
        
    case "Pagomovil":
        echo "Pago con Pagomovil seleccionado. Serás redirigido para completar la transacción.\n";
        break;

    default:
        echo "Método de pago no válido o no seleccionado.\n";
        break;
}
?>