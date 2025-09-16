#include<stdio.h>
int main()
{
    int a,b,i,j,isPrime;
    printf(" Enter lower limit: ");
    scanf("%d",&a);
    printf(" Enter upper limit: ");
    scanf("%d",&b);
    if(a<2)
    {
        a=2;
    }
    printf("Prime numbers between %d and %d are: \n",a,b);
    for(i=1;i<=b;i++)
    {
        isPrime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d\n",i);
        }
    }
    printf("\n");
    return 0;
}
