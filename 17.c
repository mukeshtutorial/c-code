//17 write a program to print lexicographi number
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, m, j, i = 1;
    printf("Enter your number : ");
    scanf("%d", &n);
    while (i <= 9)
    {
        j = 1;
        while (j <= n)
        {
            m = 0;
            while (m < j)
            {
                if ((m + j * i) <= n)
                {
                    printf("%d ", m + j * i);
                }
                m++;
            }
            j = j * 10;
        }
        i++;
    }
    return 0;
}