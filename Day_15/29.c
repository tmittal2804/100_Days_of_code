//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main(){
int num, k =1 ;
printf("enter the number");
scanf("%d", &num);
for(int i =1; i <= num; i++){
 k= i* k;
 }
 printf("the factorial value is %d\n, k);
 return 0;
 }
