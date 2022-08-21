//26 Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char str[100];
    printf("Enter your string : ");
    gets(str);
    for (i = 'a'; i <= 'z'; i++)
    {
        for (j = 0; j < strlen(str); j++)
        {
            if (i == str[j])
            {
                printf("%c", i);
            }
            else if (str[j] == i - 32)
            {
                printf("%c", i - 32);
            }
        }
    }
    return 0;
}