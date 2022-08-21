//21 Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, k = 1;
    char str[100];
    printf("Enter your string : ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            k++;
        }
    }
    printf("%d", k);
    return 0;
}