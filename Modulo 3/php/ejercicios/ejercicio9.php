<?php
$temperatura = 90; 

if ($temperatura < 10) {
    echo "La temperatura esta fría.\n";
} elseif ($temperatura >= 10 && $temperatura <= 25) {
    echo "La temperatura esta templada.\n";
} else {
    echo "La temperatura esta calurosa.\n";
}
?>
