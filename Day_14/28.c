// Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main(){
int num, pro=1;
printf("enter your number: ");
scanf("%d", &num);
if (num <= 0){
printf("wrong input");
return 0;
}
for(int i=1; i<=num; i++){
if ( i%2 == 0){
pro *= i;
}
}
printf("product of all even number is %d\n", pro);
}
