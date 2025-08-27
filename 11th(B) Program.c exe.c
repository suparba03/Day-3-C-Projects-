#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n/10;
    b=a*10;
    c=n-b;
    printf("The last digit of an integer is: %d",c);
    return 0;
}
