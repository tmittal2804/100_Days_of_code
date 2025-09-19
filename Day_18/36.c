// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() {
    int num1, num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    printf("Highest Common Factor (HCF) is %d\n", num1);
    return 0;
}
