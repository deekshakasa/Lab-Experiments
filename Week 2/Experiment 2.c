#include <stdio.h>
int main() {
    float f,c;
    printf("Enter temperature in Fahrenheit ");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("Celsius is %f\n", c);
    printf("Enter temperature in Celsius");
    scanf("%f",&c);
    f = (c*9 /5)+32;
    printf("Fahrenheit is %f\n", f);
}