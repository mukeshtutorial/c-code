// 30. Write a C programming to convert vowels into upper case character in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[20];
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
    }
    puts(str);
    return 0;
}