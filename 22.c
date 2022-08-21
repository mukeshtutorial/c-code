//22 Write a program in C to compare two strings without using string library functions.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, k = 0;
    char str1[100], str2[100];
    printf("Enter your first string : ");
    gets(str1);
    printf("Enter your second string : ");
    gets(str2);
    for (i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == str2[i])
        {
            k++;
        }
    }
    if (k == strlen(str1))
    {
        printf("String are equal");
    }
    else
    {
        printf("String is not equal");
    }
    return 0;
}