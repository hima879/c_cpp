// Program Name: CelsiusToFahrenheit.c
// Description: This program converts a temperature from Celsius to Fahrenheit.
// Formula: Fahrenheit = (Celsius * 9.0 / 5.0) + 32
// Author: [Your Name]
// Date: [Current Date]

#include <stdio.h>

int main() {
    // Declare variables for temperature
    float celsius, fahrenheit;

    // --- Input Section ---
    // Prompt the user to enter temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // --- Conversion Formula ---
    // Apply formula to convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // --- Output Section ---
    // Display the converted temperature
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
