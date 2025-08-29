#include <stdio.h>
#include <math.h>
int main() {
    float principal,rate,time,si,ci,amount;
    printf("enter principal amount: ");
    scanf("%f",&principal);
    printf("enter rate of interest: ");
    scanf("%f",&rate);
    printf("enter time: ");
    scanf("%f",&time);
    
    si = (principal*rate*time)/100;
    printf("simple interest is : %f\n",si);
    
    amount = principal*pow((1 + (rate/100)),time);
    ci = amount - principal;
    
    printf("\n amount is : %.2f\n",amount);
    printf("compound interest is : %.2f\n",ci);
    
    return 0;
}