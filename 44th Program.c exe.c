#include <stdio.h>
#include <math.h>
int main()
{
    int n,choice,temp,sq,digit,a,sum=0,count=0;
    printf("Menu\n");
    printf("1.Check Narcissistic Number\n ");
    printf("2.Check Automorphic Number \n");
    printf("Enter your choice ");
    scanf("%d",&choice);
    printf("Enter a number ");
    scanf("%d",&n);
    switch(choice)
    {
        case 1:
            temp=n;
            while(temp!=0)
            {
                temp=temp/10;
                count++;
            }
            temp=n;
            while(temp!=0)
            {
                digit=temp%10;
                sum=sum+pow(digit,count);
                temp=temp/10;
            }
            if(sum==n)
                printf("\n %d is Narcissistic Number ",n);
            else
                printf("\n %d is not Narcissistic Number ",n);
                break;
            case 2:
                sq=n*n;
                temp=n;
                a=1;
                while(temp>0)
                {
                    if(temp%10==sq%10)
                    {
                        a=0;
                        break;
                    }
                    temp=temp/10;
                    sq=sq/10;
                }
                if(a==1)
                    printf("\n %d is an Automorphic Number ",n);
                else
                    printf("\n %d is not an Automorphic Number ",n);
                    break;
                    default:
                    printf("\n Invalid choice!");
    }
    return 0;
}
