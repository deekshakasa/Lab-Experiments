#include <stdio.h>
#include <math.h>
int main() {
    float p,r,t,amount,compound;
    printf("Enter principal, rate and time: ");
    scanf("%f%f%f",&p,&r,&t);
    amount = p * pow(1 + r / 100, t);
    compound = amount-p;
    printf("Compound Interest is %f\n", compound);
}