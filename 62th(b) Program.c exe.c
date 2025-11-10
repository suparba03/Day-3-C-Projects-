#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[200];
    int i;
    printf("Enter a string ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    printf("Copied string is %s\n ",str2);
    return 0;
}
