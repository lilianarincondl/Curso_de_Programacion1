<?php
for ($i = 1; $i <= 30; $i++) {
    if ($i % 3 == 0 && $i % 5 == 0) {
        echo "MarTierra\n";
    } elseif ($i % 3 == 0) {
        echo "Mar\n";
    } elseif ($i % 5 == 0) {
        echo "Tierra\n";
    } else {
        echo "$i\n";
    }
}
?>
