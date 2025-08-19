/* 
   Program: Factorial of a Number using do-while loop
   Description: 
   This program calculates the factorial (product of numbers from 1 to n) of 
   a number entered by the user. It uses a do-while loop to perform the 
   repeated multiplication process.

   Example:
   Input: 5
   Process: 1 * 2 * 3 * 4 * 5 = 120
   Output: 120
*/

#include <stdio.h>  // Header file to use input-output functions like printf and scanf

int main() {
    int i = 1, n, product = 1;  
    /* 
       i → loop counter, starts from 1 because factorial calculation begins with 1.
       n → the number entered by the user.
       product → stores the final result of factorial. Initialized to 1 
                 because multiplying with 1 does not affect the result.
    */

    // Step 1: Ask the user to enter a number
    printf("Enter a number : ");
    scanf("%d", &n);  // Read the number from user and store it in variable 'n'

    /*
       Step 2: Use do-while loop to calculate factorial.
       - A do-while loop executes at least once before checking condition.
       - In every iteration:
            product = product * i
            i = i + 1
       - The loop stops when i becomes greater than n.
    */
    do {
        product *= i;  // Multiply current 'i' with 'product' and update product
        i++;           // Increment 'i' for the next multiplication
    } while(i <= n);   // Continue until i exceeds n

    // Step 3: Print the result (factorial of the number)
    printf("The factorial of number %d is: %d\n", n, product);

    return 0;  // Return 0 → indicates successful execution of the program
}
