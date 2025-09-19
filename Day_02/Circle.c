// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    float radius;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    printf("Circumference of circle is: %f \n",2*3.14*radius);
    printf("Area of circle is: %f \n",3.14*radius*radius);

    return 0;
}

