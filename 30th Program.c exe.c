#include<stdio.h>
int main()
{
    int english,maths,biology,physics,chemistry,avg;
    printf("\nEnter english marks: ");
    scanf("%d",&english);
    printf("\nEnter maths marks: ");
    scanf("%d",&maths);
    printf("\nEnter biology marks: ");
    scanf("%d",&biology);
    printf("\nEnter physics marks: ");
    scanf("%d",&physics);
    printf("\nEnter chemistry marks: ");
    scanf("%d",&chemistry);
    avg=(english+maths+biology+physics+chemistry)/5;
    if(avg>=90)
    {
        printf("O grade");
    }
    else if(avg>=80)
    {
        printf("A+ grade");
    }
    else if(avg>=70)
    {
        printf("A grade");
    }
    else if(avg>=60)
    {
        printf("B+ grade");
    }
    else if(avg>=50)
    {
        printf("B grade");
    }
    else if(avg>=40)
    {
        printf("C grade");
    }
    else if(avg<=40)
    {
        printf("Fail");
    }
    return 0;
}
