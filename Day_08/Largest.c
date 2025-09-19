// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main() {
    int a, b, c;
    printf ("Enter a:");
    scanf("%d"' &a);
    printf ("Enter b:");
    scanf("%d"' &b);
    printf ("Enter c:");
    scanf("%d"' &c);
    if (a >= b && a >= c) {
        printf("Largest is %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("Largest is %d\n", b);
    }
    else {
        printf("Largest is %d\n", c);
    }
    return 0;
}



