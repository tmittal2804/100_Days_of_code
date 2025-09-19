//Write a program to find the LCM of two numbers.

#include<stdio.h>
int main(){
int a,b,c;
printf("enter the two number");
scanf("%d %d", &a,&b);
c = (a > b) ? a : b;
while(1){
 if (c % a == 0 && c % b == 0) {
 printf("LCM of %d and %d is %d\n", a, b, c);
 break;
 }
 c++;
 }
 return 0;
 }
 
