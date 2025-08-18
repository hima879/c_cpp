/* Program Name: ReverseMultiplicationTable.c
   Description: This program prints the multiplication table of a number 
   entered by the user in reverse order (from 10 down to 1). */

#include <stdio.h>
int main() {
    int i, n;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop starts from 10 and goes down to 1
    for (i = 10; i >= 1; i--) {
        printf("%d X %d = %d\n", i, n, i * n);
    }

    return 0;
}
