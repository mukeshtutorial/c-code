//12 Write a C program to find next smallest palindrome of a given number. Go to the editor
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, sum = 0, temp;
    printf("Enter your number : ");
    scanf("%d", &num);
    num = num + 1;
    while (1)
    {
        temp = num;

        while (num > 0)
        {
            sum = (sum * 10) + num % 10;
            num = num / 10;
        }
        num = temp;
        if (sum == num)
        {
            printf("%d", sum);
            exit(0);
        }
        sum = 0;
        num++;
    }
    return 0;
}