#include<stdio.h>
int main()
{
    char operator;
    float a,b;
    printf("Enter an operator(+,-,*,%): ");
    scanf("%c",&operator);
    printf("Enter an operand: ");
    scanf("%.2f",&a);
    printf("Enter an operand: ");
    scanf("%.2f",&b);
    switch(operator)
    {
        case'+':
            printf(" %.2f+%.2f=%.2f ",a,b,(a+b));
            break;
        case'-':
            printf(" %.2f-%.2f=%.2f ",a,b,(a-b));
            break;
        case'*':
            printf(" %.2f*%.2f=%.2f ",a,b,(a*b));
            break;
        case'%':
            printf(" %.2f % %.2f=%.2f ",a,b,(a%b));
            break;
        default:
            printf(" Operator is incorrect ");
    }
    return 0;
}
