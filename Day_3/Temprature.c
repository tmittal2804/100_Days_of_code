// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("You entered: %.2f°C\n", celsius);
    printf("Fahrenheit = %.2f°F\n", fahrenheit);
    return 0;
}

