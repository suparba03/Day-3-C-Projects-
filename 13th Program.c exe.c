#include<stdio.h>
int main()
{
    int l,b,perimeter,area;
    printf("\nEnter the length: ");
    scanf("%d",&l);
    printf("\nEnter the breadth: ");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("\nArea of the rectangle is: %d",area);
    printf("\nPerimeter of the rectangle is: %d",perimeter);
    return 0;
}
