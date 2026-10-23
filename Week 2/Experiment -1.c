#include <stdio.h>
int main() {
    float a, b, c, sum, average;
    printf("Enter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    sum = a + b + c;
    average = sum / 3;
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", average);
}
    