// 3. Write a program in C to copy the elements of one array into another array.
#include <stdio.h>
int main()
{
    int arr1[4], arr2[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Element %d : - ", i);
        scanf("%d", &arr1[i]);
    }
    for (int j = 0; j < 4; j++)
    {
        arr2[j] = arr1[j];
    }
    for (int k = 0; k < 4; k++)
    {
        printf("%d ", arr2[k]);
    }
    return 0;
}