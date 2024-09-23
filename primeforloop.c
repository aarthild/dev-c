#include<stdio.h>
int main()
{
	int i,a,c=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		printf("the given number is prime");
	}
	else
	{
		printf("is it not a prime number");
	}
}
