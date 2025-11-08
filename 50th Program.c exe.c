#include <stdio.h>
int main()
{
    int a,num,r,rev=0;
    printf("Enter a number ");
    scanf("%d",&num);
    a=num;
    while(num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(a==rev)
        printf("%d is a pallindrome number ",a);
    else
        printf("%d is not a pallindrome number ",a);
    return 0;
}
