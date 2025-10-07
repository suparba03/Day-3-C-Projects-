#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number ");
    scanf("%d",&a);
    b=(a/10)*10;
    c=a-b;
    if(a%7==0||c==7)
    {
        printf("\n The number is buzz number ");
    }
    else
    {
        printf("\n The number is not buzz number ");
    }
    if(a%2==0)
    {
        printf("\n The number is even ");
    }
    else
    {
       printf("\n The number is odd ");
    }
    if(a>=0)
    {
        printf("\n The number is positive ");
    }
    else
    {
       printf("\n The number is negative ");
    }
    return 0;
}
