//15 Write a C program to find angle between given hour and minute hands.
#include <stdio.h>
int main()
{
    int HR, min;
    printf("Enter your Hour : ");
    scanf("%d", &HR);
    printf("Enter your Minute : ");
    scanf("%d", &min);
    float k = 5.5 * min;
    float angle = (30 * HR) - k;
    if (angle < -180)
    {
        printf("Your Angle is %f", 360 + angle);
    }
    else if (angle < 0)
    {
        printf("Your Angle is %f", -angle);
    }
    else if (angle > 180)
    {
        printf("Your Angle is %f", 360 - angle);
    }
    else
    {
        printf("Your Angle is %f", angle);
    }
    return 0;
}