#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf(" The given integer is EVEN ");
    }
    else
    {
        printf(" The given integer is ODD ");
    }
    return 0;
}
