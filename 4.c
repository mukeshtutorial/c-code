// 4 check leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("Enter your birth year year :");
    scanf("%d", &year);
    if ((year % 400) == 0)
        printf("%d is a Leap year.\n", year);
    else if ((year % 100) == 0)
        printf("%d is a Not Leap year.\n", year);
    else if ((year % 4) == 0)
        printf("%d is a Leap year.\n", year);
    else
        printf("%d is Not a Leap year \n", year);
    return 0;
}