//5. Write a program in C to find the length of a string without using library function.
#include <stdio.h>
int main()
{
    int i = 0;
    char Abhi[20];
    printf("Enter your string : ");
    gets(Abhi);
    puts(Abhi);
    while (Abhi[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
    return 0;
}