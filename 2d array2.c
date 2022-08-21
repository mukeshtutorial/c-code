#include<stdio.h>
int main()
{
	int ar[5][5],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j || i+j==4)
			{
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
}
