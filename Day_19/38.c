// Write a program to find the sum of digits of a number

#include<stdio.h>
int main(){
int a, b=0;
printf("enter your number");
scanf("%d", &a);
while ( a != 0) {
 b += a % 10;
  a /= 10;
  }
  printf("sum of the digits is %d\n",b);
  return 0;
  }
  
