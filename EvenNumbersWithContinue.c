/* Program Name: SumOfNaturalNumbersDoWhile.c
   Description: This program calculates and prints the sum of the first 'n' natural numbers 
                using a do-while loop. The user enters the value of 'n'. 
*/

#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;   // i is loop counter, n is user input, sum stores total

    // Prompt user to enter a positive number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Use do-while loop to calculate sum of first n natural numbers
    do {
        sum += i;   // Add current value of i to sum
        i++;        // Move to the next number
    } while (i <= n);  // Repeat until i becomes greater than n

    // Display the final result
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0; // End of program
}
