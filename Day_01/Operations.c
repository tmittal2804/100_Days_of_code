// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the First number: ");
    scanf("%d", &a);
    printf("Enter the Second number: ");
    scanf("%d", &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0) {
        printf("Quotient = %d\n", a / b);
    } else {
        printf("Quotient = Undefined\n");
    }

    return 0;
}

