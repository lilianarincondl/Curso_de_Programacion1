<?php
$pares = [];
$impares = [];

for ($i = 1; $i <= 50; $i++) {
    if ($i % 2 == 0) {
        $pares[] = $i; 
    } else {
        $impares[] = $i; 
    }
}

// Mostrar los resultados
echo "Números pares: " . implode(", ", $pares) . "\n";
echo "Cantidad de números pares: " . count($pares) . "\n";

echo "Números impares: " . implode(", ", $impares) . "\n";
echo "Cantidad de números impares: " . count($impares) . "\n";
?>
