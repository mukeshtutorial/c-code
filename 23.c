//23 Write a program in C to count total number of alphabets, digits and special characters in a string
#include <stdio.h>
#include <string.h>
int main()
{
    int i, k, j, l = 0, m, n = 0, v = 0;
    char srt[100];
    printf("Enter your string : ");
    gets(srt);
    for (i = 0; i < strlen(srt); i++)
    {
        for (j = 'a'; j <= 'z'; j++)
        {
            if (srt[i] == j)
            {
                l++;
            }
        }
        for (k = 'A'; k <= 'Z'; k++)
        {
            if (srt[i] == k)
            {
                l++;
            }
        }
        for (m = '0'; m <= '9'; m++)
        {
            if (srt[i] == m)
            {
                n++;
            }
        }
    }
    printf("Alphabet is %d\n", l);
    printf("Number is %d\n", n);
    printf("Special char is %d\n", strlen(srt) - (l + n));
    return 0;
}