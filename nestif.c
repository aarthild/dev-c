#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&b>c)
	{
		if(a>b&&a>c)
		{
			printf("a is biggest");
		}
		else
		{
			printf("a is smallest");
		}
	}
	else if(b>c&&b>a)
	{
		if(b>a&&b>c)
		{
			printf("b is biggest");
		}
		else
		{
			printf("b is  smallest");
		}
	}
	else 
	{
		if(c>a&&c>b)
		{
			printf("c is big");
		}
		else
		{
			printf("c is small");
		}
	}
}
