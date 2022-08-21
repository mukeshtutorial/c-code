// WAP to read marks of five students , calculate sum and avrage using arrays

#include<stdio.h>
int main()
{
	int marks[5],i;
	float sum=0,avg;
	printf("Enter the array element = ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
		avg = sum/5;
	}
	//avg = sum/5;
	printf("%f\n",sum);
	printf("%f\n",avg);
	return 0;
}
