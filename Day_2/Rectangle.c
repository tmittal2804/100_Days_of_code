// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {
    float length, breadth;
    printf("Enter the length of rectangle:");
    scanf("%f", &length);
    printf("Enter the breadth of rectangle:");
    scanf("%f", &breadth);
    printf("Perimeter of rectangle is %f \n",2 * (length + breadth));
    printf("Perimeter of rectangle is %f \n",length * breadth);
    return 0;
}

