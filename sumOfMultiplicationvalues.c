/*Write a program to print the sum of multiplication table for the number entered by the user*/

#include<stdio.h>  // Include the standard input-output header for using printf and scanf functions.

int main() {
    int i, n, sum = 0;  // Declare integer variables i (for loop iteration), n (user input), and sum (to hold the result).

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);  // Take user input and store it in variable 'n'

    // Loop through numbers 1 to 10 to calculate the multiplication table
    for(i = 1; i <= 10; i++) {
        sum += (n * i);  // Add the product of 'n' and 'i' to 'sum' in each iteration
    }

    // Print the sum of the multiplication table
    printf("The sum of %d multiplication table is: %d", n, sum);

    return 0;  // End of the program, return 0 indicates successful execution
}
