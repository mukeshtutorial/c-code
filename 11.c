// 11. Write a C program to count the numbers without digit 7, from 1 to a given number
#include <stdio.h>
int main()
{
    int num, i, temp, sum, k = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        temp = i;
        while (i > 0)
        {
            sum = i % 10;
            if (sum == 7)
            {
                k++;
                break;
            }
            i = i / 10;
        }
        i = temp;
    }
    printf("%d", num - k);
    return 0;
}