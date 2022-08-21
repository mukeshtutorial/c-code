#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *ptr=NULL;
    char string[34]="raju is a good boy";
    ptr=fopen("satya.txt","w");
    printf("Enter your content : ");
    gets(string);
    fputs(ptr,string);
    fclose(ptr);
    return 0;
}
