// 29 palindrome string
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, n;
    char n1[10], n2[10];
    printf("Enter your first string : ");
    scanf("%s", n1);
    for (i = strlen(n1) - 1; i >= 0; i--)
    {
        n2[j] = n1[i];
        j++;
    }
    if (strcmp(n2, n1) == 0)
    {
        printf("This is Palindrome number");
    }
    else
    {
        printf("Thi is not Palindrone number");
    }
    return 0;
}