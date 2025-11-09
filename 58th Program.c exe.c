#include <stdio.h>
int isMax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int isMin(int arr[],int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
int main()
{
    int n;
    printf("Enter number of elements ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=isMax(arr,n);
    int min=isMin(arr,n);
    printf("\nMaximum element is %d",max);
    printf("\nMinimun element is %d",min);
    return 0;
}
