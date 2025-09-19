 // Write a program to check if a number is a palindrome.
 
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    int digits = (num == 0) ? 1 : (int)log10(num) + 1;
    for (int i = 0; i < digits; i++) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
