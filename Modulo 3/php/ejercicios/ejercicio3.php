<?php
$numero_secreto = 42; // Número secreto a adivinar
$intento = 1;

while ($intento != $numero_secreto) {
    echo "Intento: $intento\n";
    $intento++;
}

echo "¡Adivinaste el número secreto: $numero_secreto!\n";
?>
