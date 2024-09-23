#include<stdio.h>
int prime()
{
	int a;
	scanf("%d",&a);
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	return c;
}
int main()
{
	int res=prime();
	if(res==2)
	{
		printf("prime");
	}
	else
	{
		printf("Not");
	}
}
