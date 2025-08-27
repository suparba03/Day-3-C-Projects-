#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci,a;
    printf("\nEnter the principle amount: ");
    scanf("%f",&p);
    printf("\nEnter the rate of interest: ");
    scanf("%f",&r);
    printf("\nEnter the time: ");
    scanf("%f",&t);
    a=(1+r);
    ci=p*pow(a,t);
    printf("The Compound Interest is: %.2f",ci);
    return 0;
}
