// Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() {
    int num, first, last, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;  

    while (temp >= 10) {
        temp = temp / 10;
        count++;
    }
    first = temp;

    int divisor = 1;
    for (int i = 0; i < count; i++) {
        divisor *= 10;
    }

    int middle = num % divisor;   
    middle = middle / 10;         
    int new_num = last * divisor + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", new_num);

    return 0;
}
