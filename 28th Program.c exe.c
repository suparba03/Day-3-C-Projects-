#include<stdio.h>
int main()
{
    float basic,hra,ta,da,gross;
    int a;
    printf(" Enter basic salary: ");
    scanf("%f",&basic);
    printf("\nChoose Calculatio Operation: ");
    printf(" 1.Calculate Gross Salary\n ");
    printf(" Enter a choice: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            hra=0.20*basic;
            ta=0.10*basic;
            da=0.05*basic;
            gross=basic+hra+ta+da;
            printf(" HRA=%.2f \n",hra);
            printf(" TA=%.2f \n",ta);
            printf(" DA=%.2f \n",da);
            printf(" Gross Salary=%.2f ",gross);
            break;
        default:
            printf(" Invalid Choice \n");
    }
    return 0;
}
