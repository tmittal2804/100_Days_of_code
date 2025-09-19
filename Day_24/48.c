// Write a program to print the following pattern:
/*
1
12
123
1234
12345
*/

#include<stdio.h>
int main() {
int row =5,a,b;
for ( a =1; a <= row ; a++){
for ( b = 1; b <= a; b++){
printf("%d", b);
}
printf("\n");
}
return 0;
}
