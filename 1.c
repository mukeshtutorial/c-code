// 1. Write a program in C to store elements in an array and print it.
#include <stdio.h>
int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Element %d : - ", i);
        scanf("%d", &num[i]);
    }
    printf("your array is : - ");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", num[j]);
    }
    return 0;
}