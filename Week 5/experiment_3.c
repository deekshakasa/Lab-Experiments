#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, r1, r2, real, imag;
    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and different roots: %f and %f\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Real and equal roots: %f and %f\n", r1, r1);
    } else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Complex roots: %f + %fi and %f - %fi\n",
               real, imag, real, imag);
    }
}