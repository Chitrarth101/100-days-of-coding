#include<stdio.h>
int main(){
    float x,y,sum,Difference,product,quotient;
    printf("write the value of x:");
    scanf("%f",&x);
printf("write the value of y:");
    scanf("%f",&y);
    sum=x+y;
    Difference=x-y;
    product=x*y;
    quotient=x/y;
    printf("The sum is: %f",sum);
    printf("\n The Difference is: %f",Difference);
    printf("\n The product is: %f",product);
    printf("\n The quotient is: %f",quotient);
    return(0);
}