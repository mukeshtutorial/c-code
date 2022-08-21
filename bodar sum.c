#include<stdio.h>
int main()
{
	int a[4][4],i,j,sum=0;
	printf("Enter the matrix element =\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Boder element are =\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==0||j==0||i==3||j==3)
			{
				printf("%d ",a[i][j]);
				sum = sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("%d",sum);
	return 0;
}
