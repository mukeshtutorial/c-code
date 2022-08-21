// 2. Write a program in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>
int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Element : %d - ", i);
        scanf("%d", &num[i]);
    }
    for (int j = 9; j >= 0; j--)
    {
        printf("%d ", num[j]);
    }
    return 0;
}