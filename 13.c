//13 Write a C program to print all prime factors of a given number.
#include <stdio.h>
#include <math.h>
int main()
{
    int num, i;
    printf("Enter your number : ");
    scanf("%d", &num);
    printf("Your all prime factor is : ");
    if (num > 0)
    {
        while (num % 2 == 0)
        {
            printf("2 ");
            num = num / 2;
        }
        for (i = 3; i <= sqrt(num); i = i + 2)
        {
            if (num % i == 0)
            {
                printf("%d ", i);
                num = num / i;
            }
        }
        if (num > 2)
        {
            printf("%d", num);
        }
    }
    return 0;
}