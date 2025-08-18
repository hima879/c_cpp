/* Program: Print Even Numbers up to 20 using continue statement */
#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 0 to 20 are:\n");

    // Loop from 0 to 20
    for (i = 0; i <= 20; i++) {
        // Skip odd numbers using continue
        if (i % 2 != 0) {
            continue;
        }
        // Print even number
        printf("%d is even\n", i);
    }

    printf("Finished printing even numbers.\n");
    return 0;
}
