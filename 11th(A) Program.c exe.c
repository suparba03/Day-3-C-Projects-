#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    r=n%10;
    printf("The last digit of an integer is: %d",r);
    return 0;
}
