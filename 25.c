//25 Write a program in C to copy one string to another string
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[100], str2[100];
    printf("Enter your string : ");
    gets(str);
    puts(str);
    for (i = 0; i < strlen(str); i++)
    {
        str2[i] = str[i];
    }
    for (i = 0; i < strlen(str); i++)
    {
        printf("%c", str2[i]);
    }
    return 0;
}