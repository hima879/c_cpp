/* 
    Program Name: NaturalNumbers10to20.c
    Description: This program prints natural numbers from 10 to 20.
                 The counter starts from 0 and increments until 20.
    Author: [Your Name]
    Date: [Current Date]
*/

#include <stdio.h>

int main() {
    int i = 0;  // Step 1: Initialize counter to 0

    // Step 2: Loop until i reaches 20
    while (i <= 20) {

        // Step 3: Only print numbers between 10 and 20 (inclusive)
        if (i >= 10) {
            printf("%d\n", i);
        }

        // Step 4: Move to the next number
        i++;
    }

    // Step 5: End of program
    return 0;
}
