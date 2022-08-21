//14 Write a program in C to separate the individual characters from a string.
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char str[20];
    printf("Enter your string : ");
    gets(str);
    for (i = strlen(str)-1; i >=0; i--)
    {
        printf("%c ", str[i]);
    }
    return 0;
}