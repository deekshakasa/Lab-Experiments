#include <stdio.h>
int main() {
    float A,B,C,D,E,F,G,r;
    int a,b,i,j;
    printf("Enter A B C D E F G: ");
    scanf("%f%f%f%f%f%f%f", &A, &B, &C, &D, &E, &F, &G);
    r = A + B * C + (D * E) + F * G;
    printf("(a) is %f\n", r);
    r = A / B * C - B + A * D / 3;
    printf("(b) is %f\n", r);
    printf("Enter integers A and B for part c: ");
    scanf("%d%d", &a, &b);
    r = a++ + b-- - a;     
    printf("(c)  is %f\n", r);
    printf("Enter i: ");
    scanf("%d", &i);
    j = (i++) + (++i);
    printf("(d) J = %d\n", j);
}