/*
    Program Name: FirstNNaturalNumbers_ForLoop.c
    Description: This program prints the first 'n' natural numbers using a for loop.
    Author: [Your Name]
    Date: [Current Date]
*/

#include <stdio.h>

int main() {
    int i, n;  // Step 1: Declare loop counter 'i' and variable 'n' for user input

    // Step 2: Ask the user for the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Step 3: Loop from 1 to n and print each number
    for (i = 1; i <= n; i++) {
        printf("The value of i is: %d\n", i);
    }

    // Step 4: End of program
    return 0;
}
