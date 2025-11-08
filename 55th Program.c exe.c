#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}
int main()
{
    int a,b,result;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Enter a number ");
    scanf("%d",&b);
    result=gcd(a,b);
    printf("Required gcd is %d",result);
    return 0;
}
