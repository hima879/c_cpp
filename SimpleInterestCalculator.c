// Program Name: SimpleInterestCalculator.c
// Description: This program calculates Simple Interest (SI) 
//              using Principal Amount, Number of Years, and Rate of Interest.
// Formula: SI = (Principal × Rate × Time) / 100
// Author: [Your Name]
// Date: [Current Date]

#include <stdio.h>

int main() {
    // --- Variable Declaration ---
    int principal;   // Principal amount of money
    int rate;        // Annual rate of interest (in %)
    int years;       // Time period in years
    float simpleInterest;

    // --- Input Section ---
    printf("Enter Principal amount: ");
    scanf("%d", &principal);

    printf("Enter Number of years: ");
    scanf("%d", &years);

    printf("Enter Rate of interest (in %%): ");
    scanf("%d", &rate);

    // --- Calculation Section ---
    // Formula: SI = (P × R × T) / 100
    simpleInterest = (principal * rate * years) / 100.0;

    // --- Output Section ---
    printf("Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
