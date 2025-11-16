#include <stdio.h>

void swap_call_by_value(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swapping a=%d b=%d",a,b);
}
void swap_call_by_ref(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter Swapping x=%d y=%d",*x,*y);
}
int main()
{
    int a=10,b=20,x=30,y=90;
    printf("\nBefore Swapping a=%d b=%d",a,b);
    swap_call_by_value(a,b);
    printf("\nBefore Swapping x=%d y=%d",x,y);
    swap_call_by_ref(&x,&y);
    return 0;
}
