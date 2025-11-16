#include <stdio.h>
struct Book
{
    int bookID;
    char name[30];
    float price;
};
int main()
{
    struct Book b[10];
    int i;
    printf("Enter details of 10 books \n ");
    for(i=0;i<10;i++)
    {
        printf("\nBook %d\n",i+1);
        printf("Enter Book ID ");
        scanf("%d",&b[i].bookID);
        printf("Enter book name ");
        scanf("%[^\n]",b[i].name);
        printf("Enter price ");
        scanf("%f",&b[i].price);
    }

    printf("\n\n---------Displaying Book Details---------\n");

    for(i=0;i<10;i++)
    {
        printf("\nBook %d\n",i+1);
        printf("Book ID  %d\n",b[i].bookID);
        printf("Name  %s\n",b[i].name);
        printf("Price  %.2f\n",b[i].price);
    }
    return 0;
}
