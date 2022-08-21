//18 write a c program to check a number is fibonacy or not
#include <stdio.h>
#include <string.h>
int fibonacy(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return fibonacy(a - 2) + fibonacy(a - 1);
    }
}
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    printf("%d", fibonacy(num));
    return 0;
}