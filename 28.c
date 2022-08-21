//28 search the string on the string list
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, n;
    printf("Enter your number of string : ");
    scanf("%d", &n);
    char name[n][20], s[20];
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    printf("Enter search string : ");
    gets(s);
    for (i = 0; i < n; i++)
    {
        if (strcmp(s, name[i]) == 0)
        {
            j = 1;
        }
    }
    if (j == 1)
    {
        printf("Match");
    }
    else
    {
        printf("Not Match");
    }
    return 0;
}