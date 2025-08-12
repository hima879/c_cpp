// Program Name: PassOrFailChecker.c
// Description: This program determines whether a student has passed or failed.
// Passing Criteria:
//      1. At least 33% in each subject.
//      2. A total percentage of at least 40%.
// Assumption: There are 3 subjects, marks taken as user input.
// Author: [Your Name]
// Date: [Current Date]

#include <stdio.h>

int main() {
    // --- Variable Declaration ---
    int m1, m2, m3; // Marks in three subjects

    // --- Input Section ---
    printf("Enter the marks of first subject: ");
    scanf("%d", &m1);

    printf("Enter the marks of second subject: ");
    scanf("%d", &m2);

    printf("Enter the marks of third subject: ");
    scanf("%d", &m3);

    // --- Pass/Fail Conditions ---
    // Check condition 1: At least 33% in each subject
    if (m1 < 33 || m2 < 33 || m3 < 33) {
        printf("Result: FAIL — Less than 33%% in one or more subjects.\n");
    }
    // Check condition 2: At least 40% overall percentage
    else if ((m1 + m2 + m3) / 3.0 < 40) {
        printf("Result: FAIL — Overall percentage below 40%%.\n");
    }
    // If both conditions are met
    else {
        printf("Result: PASS — Congratulations!\n");
    }

    return 0;
}
