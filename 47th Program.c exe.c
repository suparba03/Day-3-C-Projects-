#include <stdio.h>
int main()
{
    int choice,num,i,count=0,number;
    printf("\n Menu");
    printf("1.Check whether a number is composite or not\n ");
    printf("2.Exit\n");
    printf("Enter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter a number ");
        scanf("%d",&num);
        if(num<=1)
        {
            printf("Number less than or equal to 1 are neither prime nor composite\n");
            break;
        }
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
            if(Composite(number))
                printf("%d is a composite number \n",num);
            else
                printf("%d is not a composite number \n",num);
                break;
                case 2:
                    printf("Existing program... \n");
                    break;
                    default:
                        printf("Invalid choice\n");
    }
    return 0;
}
