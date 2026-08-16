#include<stdio.h>
int main(){
    int a;
    printf("write any year:");
    scanf("%d",& a);
    if(a%4==0){
    printf("this is a leap year ");
    } 
    else {
    printf("this is not a leap year ");
}
return(0);
}