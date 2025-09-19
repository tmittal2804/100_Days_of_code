//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int mask = 1 << (sizeof(int) * 8 - 1); // Start from the leftmost bit

    int started = 0;
    for (i = 0; i < sizeof(int) * 8; i++) {
        if (num & mask) {
            started = 1;
            printf("1");
        } else if (started) {
            printf("0");
        }
        mask >>= 1;
    }

        if (!started) {
        printf("0");
    }

    printf("\n");
    return 0;
}
