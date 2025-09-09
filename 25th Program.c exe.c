#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    if(a>b)
    {
      if(a>c)
        printf("\n %d is the maximum number ",a);
      else
        printf("\n %d is the maximum number ",c);
    }
    else if(b>c)
        printf("\n %d is the maximum number ",b);
    else
        printf("\n %d is the maximum number ",c);
    return 0;
}
