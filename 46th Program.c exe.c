#include <stdio.h>
int isSpecial(int n)
{
    int digit1=n/10;
    int digit2=n%10;
    int sum_of_two_digits=digit1+digit2;
    int product_of_two_digits=digit1*digit2;
    if(sum_of_two_digits+product_of_two_digits==n)
        return 1;
    else
        return 0;
}
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a>=10&&a<=99)
        if(isSpecial(a))
            printf("%d is a Special two digit number ",a);
        else
            printf("%d is a Special two digit number ",a);
    return 0;
}
