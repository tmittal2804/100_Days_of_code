// Write a program to print the following pattern:
/*
*****
****
***
**
*
*/

 #include<stdio.h>
 int main(){
 int row = 5, a,b;
 for ( a = row; a >= 1; a--){
 for ( b = 1; b <= a ; b++){
 printf("*");
 }
 printf("\n");
 }
 return 0;
 }
 
 
