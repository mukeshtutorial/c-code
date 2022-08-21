//9 Write a C program to count the total number of digit 1 appearing in all positive integers less tha
#include <stdio.h>
int main()
{
    int num, temp, k, temp2, j = 0, i;
    printf("Enter your number : ");
    scanf("%d", &num);
    temp = num;
    for (i = 1; i <= num; i++)
    {
        temp2 = i;
        while (i > 0)
        {
            k = i % 10;
            if (k == 1)
            {
                j++;
            }
            i = i / 10;
        }
        i = temp2;
    }
    printf("%d", j);
    return 0;
}