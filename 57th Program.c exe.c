#include <stdio.h>
int search(int arr[],int length,int num)
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]==num)
            return i;
    }
    return -1;
}
int main()
{
    int num,length;
    printf("Enter number of elements ");
    scanf("%d",&length);
    int arr[length];
    printf("Enter %d elements \n");
    for(int i=0;i<length;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search ");
    scanf("%d",&num);
    int x=search(arr,length,num);
    if(x==-1)
        printf("Element not found ");
    else
        printf("Element found at position %d",x+1);
    return 0;
}
