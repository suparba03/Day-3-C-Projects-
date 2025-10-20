#include <stdio.h>
int main()
{
    float weight,charge;
    printf("Enter weight of the parcel ");
    scanf("%f",&weight);
    if(weight<=10)
    {
        charge=weight*30;
    }
    else if(weight<=30)
    {
        charge=(10*30)+((weight-10)*20);
    }
    else
    {
        charge=(10*30)+((weight-30)*15);
    }
    printf("\n The total charge of the parcel is %.2f",charge);
    return 0;
}
