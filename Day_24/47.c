//Write a program to print the following pattern:
/*
*
**
***
****
*****
*/

#include<stdio.h>
int main(){
int row = 4, a, b, c;
for ( a =0 ; a <= row; a++){
for ( b= 0 ; b <= a ; b++){
printf("*");
}
printf("\n");
}
return 0;
}
