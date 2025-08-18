// Program Name: SumOfNaturalNumbers.c
// Description: This program calculates and prints the sum of the first 'n' natural numbers using a while loop.

#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;  // initialize counter (i), input (n), and accumulator (sum)

    // Ask the user to enter the number up to which sum is to be calculated
    printf("Enter the number: ");
    scanf("%d", &n);

    // Loop from 1 to n
    while (i <= n) {
        sum += i;   // add current value of i to sum
        i++;        // move to the next number
    }

    // Display the result
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;  // end of program
}
