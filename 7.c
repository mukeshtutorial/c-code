//7 frequency of a number
#include <stdio.h>
int main()
{
    int num, n, i, k = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    int sum;
    printf("Enter number which is you want to count : ");
    scanf("%d", &n);
    while (num > 0)
    {
        sum = (num % 10);
        if (sum == n)
        {
            k++;
        }
        num = num / 10;
    }
    printf("%d", k);
    return 0;
}