// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
 int a, b, c;
   // Input the sides of triangle
   printf("Enter first side of triangle : ");
   scanf("%d" , &a);
   printf("Enter second side of triangle : ");
   scanf("%d" , &b);
   printf("Enter third side of triangle : ");
   scanf("%d" , &c);
   // Check validity of triangle
    if (a + b > c && a + c > b && b + c > a) {
    printf("It is a Valid Triangle\n");
   // Type of triangle
    if (a == b && b == c) {
            printf("It is a Equilateral Triangle as all the sides are equal\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is a Isosceles Triangle as it has only two sides equal\n");
        }
        else {
            printf("It is a Scalene Triangle as all three sides are different\n");
        }
  // Pythagoras theorem to check whether it is a right angle triangle or not
        if ((a * a == b * b + c * c) ||
            (b * b == a * a + c * c) ||
            (c * c == a * a + b * b)) {
            printf("It is a Right-Angled Triangle as it satisfies Pythagoras theorem\n");
        }
    }
    else {
        printf("Not a Valid Triangle\n");
    }
 return 0;
}


