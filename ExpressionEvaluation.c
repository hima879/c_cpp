// Program Name: ExpressionEvaluation.c
// Description: This program evaluates the expression 
//              3 * x / y - z + k using given values.
// Given: x = 2, y = 3, z = 3, k = 1
// Author: [Your Name]
// Date: [Current Date]

#include <stdio.h>

int main() {
    // --- Variable Initialization ---
    int x = 2; // Value of x
    int y = 3; // Value of y
    int z = 3; // Value of z
    int k = 1; // Value of k

    // --- Expression ---
    // Formula: 3 * x / y - z + k
    int result = 3 * x / y - z + k;

    /*
        Step-by-step Calculation:
        Step 1: Substitute values
                3 * 2 / 3 - 3 + 1
        Step 2: Multiplication → 6 / 3 - 3 + 1
        Step 3: Division → 2 - 3 + 1
        Step 4: Subtraction → -1 + 1
        Step 5: Addition → 0
    */

    // --- Output ---
    printf("The result of the expression is: %d\n", result); // Expected Output: 0

    return 0;
}
