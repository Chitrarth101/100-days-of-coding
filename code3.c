#include<stdio.h>
int main(){
    int length,breath,perimeter,area;
    printf("write the value of length:");
    scanf("%d",&length);
printf("write the value of breath:");
    scanf("%d",&breath);
    perimeter= 2*(length+breath);
    printf("The perimeter is: %d",perimeter);
    area=(length*breath);
    printf("\n The area is: %d",area);
    return(0); }