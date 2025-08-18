/* Program to print the multiplication table of a number entered by the user */
#include<stdio.h>

int main() {
    int i, n;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d:\n", n);

    // Loop runs from 1 to 10 to print the table
    for(i = 1; i <= 10; i++) {
        // Printing multiplication in the format: n X i = result
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}
