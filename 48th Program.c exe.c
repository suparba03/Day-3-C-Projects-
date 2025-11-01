#include <stdio.h>
int main()
{
    int choice,num,digit,smallest;
    printf("Menu\n ");
    printf("1.Find the smallest digit of an integer ");
    printf("2.Exit\n");
    printf("Enter a choice ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter an integer ");
            scanf("%d",&num);
            if(num<0)
            num=-num;
            smallest=9;
            while(num>0)
            {
                digit=num%10;
                if(digit<smallest)
                    smallest=digit;
                    num=num/10;
            }
                    printf("%d is the smallest digit\n",smallest);
                    break;
                    case2:
                    printf("Existing Program...\n");
                    break;
                    default:
                    printf("Invalid choice\n");
    }
    return 0;
}
