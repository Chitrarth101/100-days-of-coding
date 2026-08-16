#include <stdio.h>
int main() {
    float principal,rate,time ,simple_interest,compound_interest,amount;
    int t;
    printf("Enter the principal amount:");
    scanf("%f", & principal);
    printf("Enter the rate of intrest:");
    scanf("%f",& rate);
     printf("Enter the time:");
    scanf("%f",& time);
    simple_interest=(principal*rate*time)/100;
    amount = principal;
    for (t = 0; t < (int)time; t++) {
        amount = amount + (amount * rate) / 100;
    }
    compound_interest = amount - principal;
    printf("Simple Interest = %f\n", simple_interest);
    printf("Compound Interest = %f\n", compound_interest);
    return 0;
}