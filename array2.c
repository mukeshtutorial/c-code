#include<stdio.h>
int main()
{
	int arr[7];
	int i,j;
	printf("Enter the array element=");
	for(i=0;i<7;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<7;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
