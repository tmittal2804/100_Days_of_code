// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;
    printf ("Enter the principal amount:\n"*);
    scanf ("%lf", &principal);
    printf ("Enter Rate:\n");
    scanf ("%lf", &rate);
    printf ("Enter time:\n");
    scanf ("%lf", &time);
    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * (pow((1 + rate / 100.0), time)) - principal;
    printf("Simple Interest=%.2lf, Compound Interest=%.2lf\n", simpleInterest, compoundInterest);
   return 0;
}

