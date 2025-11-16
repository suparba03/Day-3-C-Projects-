#include <stdio.h>

struct Complex
{
    int real;
    int imag;
};

int main()
{
    struct Complex c1,c2,sum;
    printf("Enter first complex number \n");
    printf("Enter real part ");
    scanf("%d",&c1.real);
    printf("Enter imaginary part ");
    scanf("%d",&c1.imag);

    printf("Enter second complex number \n");
    printf("Enter real part ");
    scanf("%d",&c2.real);
    printf("Enter imaginary part ");
    scanf("%d",&c2.imag);

    sum.real=c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;
    printf("Sum of complex numbers =%d+%di\n",sum.real,sum.imag);
    return 0;
}
