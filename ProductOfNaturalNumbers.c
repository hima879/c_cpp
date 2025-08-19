// Program Name: ProductOfNaturalNumbers.c

#include<stdio.h>  // Include the standard input-output header file for using printf and scanf functions.

int main() {
    int i, n, product = 1;  // Declare integer variables: 
                            // 'i' for the loop, 'n' for the input number, 
                            // 'product' for storing the result of multiplication.

    // Step 1: Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &n);  // Take user input for the number 'n' and store it in variable 'n'.

    // Step 2: Using a for loop to calculate the product of numbers from 1 to n
    printf("\nCalculating the product step by step:\n");
    for (i = 1; i <= n; i++) {
        product *= i;  // Multiply 'product' by the current value of 'i' and update 'product'.
        printf("Step %d: product = %d\n", i, product);  // Print the product after each step
    }

    // Step 3: Print the final calculated product (factorial).
    printf("\nThe product of numbers from 1 to %d is: %d\n", n, product);

    return 0;  // Return 0 to indicate successful program execution.
}
