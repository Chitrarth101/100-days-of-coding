#include <stdio.h>
int main() {
    float celsius,fahrenheit,Temperature;
    printf("Enter temperature in celsius:");
    scanf("%f",& celsius);
    Temperature= (celsius*9/5)+32;
    printf(" Temperature in fahrenheit: %f",Temperature);
return(0);
}