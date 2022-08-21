// WAP to print the maximum no of element
#include<stdio.h>
int main()
{
	int a[5],i,max=0;
	printf("Enter the element = ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
	}
	printf("maximum value of an array is %d",max);
	return 0;
}
	
	
	
	

