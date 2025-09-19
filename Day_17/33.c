// Write a program to check if a number is an Armstrong number.

#include<stdio.h>
#include<math.h>
int main() {
    int num, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Calculate sum of nth powers of digits
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    // Check if Armstrong
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
