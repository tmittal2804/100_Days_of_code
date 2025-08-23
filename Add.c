#include <stdio.h>

int main() {
    int a, b, sum;
    
    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d" , &a);
    printf("Enter the Second number: ");
    scanf("%d" , &b);
    
    // Calculate sum
    sum = a + b;
    
    // Display result
    printf("Sum = %d\n", sum);
    
    return 0;
}

