//10 Write a C programming to check if a given integer is a power of three.
#include <stdio.h>
int main()
{
    int num, k = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    while (num > 0)
    {
        k = k + num % 3;
        num = num / 3;
    }
    if (k == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}