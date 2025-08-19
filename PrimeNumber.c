/* Write a program to check whether the number is prime or not */
#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Edge case for numbers less than 2 (1 is not prime)
    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    // Handle the number 2 (the only even prime number)
    if (n == 2) {
        printf("Prime\n");
        return 0;
    }

    // Skip even numbers greater than 2
    if (n % 2 == 0) {
        printf("Not prime\n");
        return 0;
    }

    // Check divisibility from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            printf("Not prime\n");
            return 0;
        }
    }

    // If no divisors are found, n is prime
    printf("Prime\n");
    return 0;
}
