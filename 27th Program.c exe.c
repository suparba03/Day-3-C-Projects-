#include<stdio.h>
int main()
{
    char n;
    printf("Enter a character: ");
    scanf("%c",&n);
    switch(n)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n %c is a vowel",n);
            break;
            default:printf("%c is a consonant ",n);
    }
    return 0;
}
