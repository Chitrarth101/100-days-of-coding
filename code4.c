#include<stdio.h>
int main(){
    float radius,circumference,area;
    printf("write the value of radius:");
    scanf("%f",&radius);
    circumference= 2*(3.14*radius);
    printf("The circcumference is: %f",circumference);
    area= (3.14*radius*radius);
    printf("\n The area is: %f",area);
    return(0); }