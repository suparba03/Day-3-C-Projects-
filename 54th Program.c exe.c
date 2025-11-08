#include <stdio.h>
int sum_of_even_numbers(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(2*i);
    }
    return sum;
}
int main()
{
    int result;
    result=sum_of_even_numbers(10);
    printf("%d is the sum of 1st 10 even numbers ",result);
    return 0;
}
