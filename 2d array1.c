// WAP to create a 2D array of order 3*5 and store the element into it,and find the largest element
#include<stdio.h>
int main()
{
	int a[3][5],i,j,max=0;
	printf("Enter the array element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
		   scanf("%d",&a[i][j]);
	    }
	}
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("Largest no is %d",max);
	return 0;
}

