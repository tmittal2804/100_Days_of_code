// Write a program to input two numbers and display their sum.

#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter the first number: ");
    scanf("%d" , &a);
    printf("Enter the Second number: ");
    scanf("%d" , &b);
    // Calculate sum
    sum = a + b;
    printf("Sum = %d\n", sum);
    
    return 0;
}

