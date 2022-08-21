// 8 Write a C program to find the number of trailing zeroes in a given factorial.
#include <stdio.h>
int main()
{
    int num, sum = 1, k, j = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = num; i > 0; i--)
    {
        sum *= i;
    }
    if (sum > 24)
    {
        while (sum > 0)
        {
            k = sum % 10;
            if (k == 0)
            {
                j++;
            }
            sum = sum / 10;
        }
        printf("There are %d zero(0)", j);
    }
    else
    {
        printf("There are no zero(0)");
    }
    return 0;
}