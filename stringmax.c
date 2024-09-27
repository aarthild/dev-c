#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	int i,max=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>max)
		{
			max=str[i];	
		}
	}
	printf("%c",max);
	
}
