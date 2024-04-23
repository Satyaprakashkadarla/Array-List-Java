<?php
// Function to print numbers from n down to 1 recursively
function printNumbers($n) {
    // Base case: if n is less than or equal to 0, return without printing
    if ($n <= 0) {
        return;
    }

    // Print the current value of n
    echo $n . "\n";

    // Recursive call: printNumbers with n-1 as argument
    printNumbers($n - 1);
}

// Example usage:
$n = 5; // Example: start from 5
echo "Printing numbers from $n down to 1:\n";
printNumbers($n);
?>
