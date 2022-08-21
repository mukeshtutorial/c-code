//16 write a c program to print the fibonachi number
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter your number : ");
    scanf("%d", &num);
    int x = 0, b = 1;
    for (i = 1; i < num - 1; i++)
    {
        b = x + b;
        x = (x + b) - x;
    }
    printf("%d", x);
    return 0;
}