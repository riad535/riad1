#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter a letter:");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case\n", ch);
    }
    return 0;
}
