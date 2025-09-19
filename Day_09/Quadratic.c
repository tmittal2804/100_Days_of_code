// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Prompt the user to enter the coefficients.
    printf("Enter the coefficient of a in the quadratic equation:");
    scanf("%lf", &a);
    printf("Enter the coefficient of b in the quadratic equation:");
    scanf("%lf", &b);
    printf("Enter the coefficient of a in the quadratic equation:");
    scanf("%lf", &a);
    discriminant = b * b - 4 * a * c;
    /*Categorize the roots based on the value of the discriminant.
    Case 1: Discriminant is positive */
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    /*Case 2: Discriminant is zero
    The roots are real and equal.*/
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    /*Case 3: Discriminant is negative
    The roots are complex and conjugate.*/
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugate.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
    return 0;
}

