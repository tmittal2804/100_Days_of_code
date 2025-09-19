// Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>
int main() {
    int n = 4; // number of rows in upper half (excluding mirror part)

    // Upper half (pyramid)
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (inverted pyramid)
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

