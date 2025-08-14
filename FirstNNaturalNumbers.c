/* 
    Program Name: FirstNNaturalNumbers.c
    Description: This program prints the first 'n' natural numbers using a do-while loop.
    Author: [Your Name]
    Date: [Current Date]
*/

#include <stdio.h>

int main() {
    int i = 1, n;  // Step 1: 'i' starts from 1, 'n' will store user input

    // Step 2: Ask the user how many natural numbers to print
    printf("Enter a number: ");
    scanf("%d", &n);

    // Step 3: Use do-while loop to print numbers from 1 to n
    do {
        printf("The value of i is: %d\n", i);  // Print current value
        i++;  // Move to the next number
    } while (i <= n);  // Loop runs until i exceeds n

    // Step 4: End of program
    return 0;
}
