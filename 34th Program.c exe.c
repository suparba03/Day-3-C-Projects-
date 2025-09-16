#include<stdio.h>
int main()
{
    int a=0,b=1,i,n,x=0,sum=0;
    printf(" Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\t%d",a);
        sum=sum+a;
        x=a+b;
        a=b;
        b=x;
    }
    printf("\nSum of the fibonnaci series is %d",sum);
    return 0;
}
