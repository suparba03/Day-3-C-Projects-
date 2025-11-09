#include <stdio.h>
int main()
{
    int a[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("Sum of matrix is %d ",sum);
    return 0;
}
