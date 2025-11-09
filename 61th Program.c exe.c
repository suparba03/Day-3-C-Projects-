#include <stdio.h>
int main()
{
    int a[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int transpose[3][2];
    int rows=2,columns=3;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    printf("Original matrix \n ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix\n ");
    for(int i=0;i<columns;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
