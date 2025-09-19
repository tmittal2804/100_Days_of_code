// Write a program to print the following pattern:

/*
*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>
int main() {
    int blocks[] = {1, 3, 5, 3, 1};
    int n = sizeof(blocks) / sizeof(blocks[0]);
    for (int i = 0; i < n; i++) {
        // Print stars for this block
        for (int j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }
        // Print a blank line after each block except the last
        if (i < n - 1) {
            printf("\n");
        }
    }

    return 0;
}


