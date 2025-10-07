#include <stdio.h>
int main()
{
    int a;
    printf("Enter an age ");
    scanf("%d",&a);
    switch(a)
    {
        case  0:
        case  1:
        case  2:
        case  3:
        case  4:
        case  5:
        case  6:
        case  7:
        case  8:
        case  9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            printf(" Not eligible to vote ");
            break;
        default:
            printf(" Eligible to vote ");
    }
    return 0;
}
