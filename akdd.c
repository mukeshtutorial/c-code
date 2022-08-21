#include<stdio.h>
int main()
{
	int i,n ,r=1;
	printf("Enter the factorial no : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=r*i;
	}
	printf("%d",r);
}
