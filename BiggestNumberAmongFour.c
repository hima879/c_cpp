// Program Name: BiggestNumberAmongFour.c
// Description: This program finds the biggest number among four numbers entered by the user.
// Author: [Your Name]
// Date: [Current Date]

#include <stdio.h>

int main() {
    int a, b, c, d;  // Variables to store the four numbers

    // Step 1: Take input from the user
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("Enter the fourth number: ");
    scanf("%d", &d);

    /*
        Step 2: Compare numbers to find the largest.
        We check each number against the others using AND (&&) conditions.
    */
    if (a > b && a > c && a > d) {
        printf("%d is the largest number among %d, %d, %d, and %d.\n", a, a, b, c, d);
    }
    else if (b > a && b > c && b > d) {
        printf("%d is the largest number among %d, %d, %d, and %d.\n", b, a, b, c, d);
    }
    else if (c > a && c > b && c > d) {
        printf("%d is the largest number among %d, %d, %d, and %d.\n", c, a, b, c, d);
    }
    else {
        printf("%d is the largest number among %d, %d, %d, and %d.\n", d, a, b, c, d);
    }

    // Step 3: End of program
    return 0;
}
