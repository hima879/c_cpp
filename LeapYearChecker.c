// Program Name: LeapYearChecker.c
// Description: This program checks whether a given year is a leap year or not.
// Author: [Your Name]
// Date: [Current Date]

#include <stdio.h>

int main() {
    int year;  // Variable to store the year entered by the user

    // Step 1: Ask the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);  // Step 2: Read the year from the user

    /*
        Step 3: Check leap year conditions
        A leap year is:
        1. Exactly divisible by 400 OR
        2. Exactly divisible by 4 but NOT divisible by 100
    */
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);  // Case 1: Divisible by 400
    } 
    else if (year % 4 == 0 && year % 100 != 0) {
        printf("%d is a leap year.\n", year);  // Case 2: Divisible by 4 but not by 100
    } 
    else {
        printf("%d is not a leap year.\n", year);  // Case 3: Not a leap year
    }

    // Step 4: End of program
    return 0;
}
