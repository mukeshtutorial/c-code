// Write a program in C to find maximum occurring character in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k = 0, p = 0, m = 0;
    char str[100], arr[20];
    printf("Enter your string : ");
    gets(str);
    for (j = 'a'; j <= 'z'; j++)
    {
        k = 0;
        for (i = 0; i < strlen(str); i++)
        {
            if (j == str[i])
            {
                k++;
                if (p < k)
                {

                    p = k;
                    arr[m] = j;
                    m++;
                    // break;
                }
            }
        }
    }
    printf("%c\n", arr[0]);
    printf("%d", p);
    return 0;
}