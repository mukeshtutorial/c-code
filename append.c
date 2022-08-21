#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	char str[45];
	fp=fopen("xyz.txt","a");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("Enter your append = ");
	gets(str);
	//fputs(str,fp); // for adding the content in same line 
	fprintf(fp,"\n%s",str); // for adding the content in new line
	printf("\nsuccessfully appended");
	fclose(fp);
}
