//20 Write a program in C to convert a decimal number to binary using recursion.
#include <stdio.h>
int binary(int n)
{
    if (n == 0)
        return 0;
    else
        return ((n % 2) + 10 * binary(n / 2));
}
int main()
{
    int num;
    printf("Enter a decimal number : ");
    scanf("%d", &num);
    printf("Decimal(%d) = Binary(%d)\n", num, binary(num));
    return 0;
}