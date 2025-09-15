/* Program to calculate the factorial of a number 
   using a decrementing loop (n × (n-1) × (n-2) × ... × 1) */

#include <stdio.h>  // Standard input-output library

int main() {
    int i, n, product = 1;  
    // n       → number entered by the user
    // product → variable to store factorial result
    // i       → loop counter

    // Step 1: Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);  // Take input from user and store in n

    // Step 2: Show step-by-step factorial calculation
    printf("\nCalculating factorial step by step:\n");

    // Loop starts from n and decrements down to 1
    for (i = n; i >= 1; i--) {
        product *= i;  // Multiply current product with i
        printf("Step: multiplying with %d → Current product = %d\n", i, product);
    }

    // Step 3: Print the final factorial
    printf("\nThe factorial of %d is: %d\n", n, product);

    return 0;  // Program executed successfully
}
