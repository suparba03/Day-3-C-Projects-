#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter positive num value: ");
    scanf("%f",&a);
    printf("Enter negative num value: ");
    scanf("%f",&b);
    printf("\nfloor value for positive num a:%.2f",floor(a));
    printf("\nceil value for positive num a:%.2f",ceil(a));
    printf("\nfloor value for negative num b:%.2f",floor(b));
    printf("\nceil value for negative num b:%.2f",ceil(b));
    return 0;
}
