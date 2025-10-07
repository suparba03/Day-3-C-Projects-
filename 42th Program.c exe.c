#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,area,perimeter,s;
    printf("Enter a number ");
    scanf("%f",&a);
    printf("Enter a number ");
    scanf("%f",&b);
    printf("Enter a number ");
    scanf("%f",&c);
    perimeter=a+b+c;
    s=perimeter/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n Perimeter of a triangle is %.2f ",perimeter);
    printf("\n Area of a triangle is %.2f ",area);
    if(area==perimeter)
    {
        printf("\n The triangle is an equable triangle ");
    }
    else
    {
        printf("\n The triangle is not an equable triangle ");
    }
    return 0;
}
