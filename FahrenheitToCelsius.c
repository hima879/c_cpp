// Program Name: FahrenheitToCelsius.c
// Description: This program converts a temperature from Fahrenheit to Celsius.
// Formula: Celsius = (5.0 / 9.0) * (Fahrenheit - 32)
// Author: [Your Name]
// Date: [Current Date]

#include <stdio.h>

int main() {
    // Declare variables for temperature
    float fahrenheit, celsius;

    // --- Input Section ---
    // Prompt the user to enter temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // --- Conversion Formula ---
    // Apply formula to convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // --- Output Section ---
    // Display the converted temperature
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
