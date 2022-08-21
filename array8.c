// WAP to print the minimum no of element
#include<stdio.h>
int main()
{
	int a[5],i,min=0;
	printf("Enter the element = ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];	
		}
	}
	printf("minimum value of an array is %d",min);
	return 0;
}
	
