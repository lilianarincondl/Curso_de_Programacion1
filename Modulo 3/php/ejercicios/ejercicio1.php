<?php
$pares = 0;
$impares = 0;

for ($i = 1; $i <= 50; $i++) {
    if ($i % 2 == 0) {
        $pares++;
    } else {
        $impares++;
    }
}

echo "Cantidad de números pares: $pares\n";
echo "Cantidad de números impares: $impares\n";
?>
