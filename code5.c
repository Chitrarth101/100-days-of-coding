#include <stdio.h>
int main() {
int a,b,c;
printf("write the valdue of a:");
scanf("%d",&a);
printf("write the valdue of b:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("The exchanged numbers are: a=%d, b=%d\n", a, b);
return(0);
}