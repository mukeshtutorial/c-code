//19 Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int pow1(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * pow1(a, b - 1);
    }
}
int main()
{
    int num, power, i;
    int sum = 1;
    printf("Enter your base number : ");
    scanf("%d", &num);
    printf("Enter your power number : ");
    scanf("%d", &power);
    printf("Answer is %d", pow1(num, power));
    return 0;
}