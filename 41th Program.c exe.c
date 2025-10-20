#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Enter a number ");
    scanf("%d",&b);
    printf("Enter a number ");
    scanf("%d",&c);
    if(a==b && b==c && c==a)
    {
        printf("\n all numbers are equal ");
    }
    else
    {
        printf("\n all numbers are mixed ");
    }
    if(a>=0 && b>=0 && c>=0)
    {
        printf("\n all numbers are positive ");
    }
    if(a>b && a>c)
    {
        printf("\n %d is the greatest number ",a);
    }
    if(b>c && b>a)
    {
        printf("\n %d is the greatest number ",b);
    }
    if(c>b && c>a)
    {
        printf("\n %d is the greatest number ",c);
    }
    return 0;
}
