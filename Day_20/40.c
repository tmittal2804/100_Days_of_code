// Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main(){
int a,b,c;
printf("enter a number");
scanf("%d",&a);
while (a != 0){
 b = a % 10 ;
 if( b == 1 ){
   c = 0; 
   printf("%d", c);
   }
   if ( b == 0 ){
   c = 1;
   printf("%d", c);
   }
   a = a /10;
   }
   return 0;
   }
   
