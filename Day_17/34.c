// Write a program to check if a number is prime.

#include <stdio.h>
int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0; // Exit early if divisible
        }
    }

    // If loop completes, number is prime
    printf("%d is a prime number.\n", num);
    return 0;
}
