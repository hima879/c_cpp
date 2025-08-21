/*
    Program Name: BreakInLoop.c
    Description: This program demonstrates the use of the 'break' statement in a loop.
                 It prints numbers from 1 to 14 and stops when i becomes 15.
    Author: [Your Name]
    Date: [Current Date]
*/

#include <stdio.h>

int main() {
    int i;  // Step 1: Declare loop counter

    // Step 2: Loop from 1 to 19
    for (i = 1; i < 20; i++) {

        // Step 3: Check if i is 15, then break out of the loop
        if (i == 15) {
            break;  // Exit the loop immediately
        }

        // Step 4: Print the current value of i
        printf("%d\n", i);
    }

    // Step 5: End of program
    return 0;
}
