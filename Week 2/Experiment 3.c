#include <stdio.h>
int main() {
    float principal,rate,time,simple;
    printf("Enter principal,rate and time: ");
    scanf("%f%f%f",&principal,&rate,&time);
    simple = (principal * rate * time) / 100;
    printf("Simple Interest is %f\n", simple);
}