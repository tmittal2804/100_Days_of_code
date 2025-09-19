// Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main(){
int a, b, c=1;
printf(" enter the number ");
scanf("%d", &a);
 while(a != 0) {
 b =a % 10;
 if( b % 2 !=0){
 c= c * b;
 }
 a /=10;
 }
 
 printf("product of odd number is %d", c);
 return 0;
 }
