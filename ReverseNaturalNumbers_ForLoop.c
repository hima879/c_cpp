/*
    Program Name: ReverseNaturalNumbers_ForLoop.c
    Description: This program prints the first 'n' natural numbers in reverse order using a for loop.
    Author: [Your Name]
    Date: [Current Date]
*/

#include <stdio.h>

int main() {
    int i, n;  // Step 1: Declare variables

    // Step 2: Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Step 3: Loop from n down to 1
    for (i = n; i >= 1; i--) {
        printf("The value of i is: %d\n", i);
    }

    // Step 4: End of program
    return 0;
}
