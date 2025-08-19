/* Program to calculate the factorial (product of all numbers) of a number entered by the user 
   using a decrementing loop */

#include <stdio.h>  // Header file for input-output functions

int main() {
    int i, n, product = 1;  // 'n' = user input, 'product' = factorial result, 'i' = loop counter

    // Step 1: Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);  // Read the number entered by the user

    // Step 2: Calculate factorial by multiplying numbers from n down to 1
    printf("\nCalculating factorial step by step:\n");
    for (i = n; i >= 1; i--) {
        product *= i;  // Multiply product with current number i
        printf("Step: multiplying with %d → Current product = %d\n", i, product); 
    }

    // Step 3: Print the final result
    printf("\nThe factorial (product) of %d is: %d\n", n, product);

    return 0;  // Successful execution
}
