// Write a program to check if a number is a strong number.

#include<stdio.h>
int main(){
int a,b,c, d=0, num ;
printf("enter the number");
scanf("%d", &a);
num =a;
while( a != 0){
 b = a % 10;
 c=1;
 for( int i=1; i <= b; i++){
 c = c * i;
 }
 d= d+c;
 a =a/10;
 }
 if (d == num){
 printf("number is strong number");
 }
 else{
 printf("number is not strong number");
 }
 return 0;
 }
 
 
